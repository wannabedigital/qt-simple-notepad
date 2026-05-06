#include "notepad.h"
#include "ui_notepad.h"
#include <QFontDialog>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QInputDialog>
#include <QTextBlock>

Notepad::Notepad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Notepad)
{
    ui->setupUi(this);
}

Notepad::~Notepad()
{
    delete ui;
}

QTextEdit* Notepad::setupNewSubWindow(QString title) {
    QTextEdit *edit = new QTextEdit();

    QMdiSubWindow *subWindow = ui->mdiArea->addSubWindow(edit);
    subWindow->setWindowTitle(title);
    subWindow->setAttribute(Qt::WA_DeleteOnClose);
    subWindow->show();

    return edit;
}

QTextEdit* Notepad::activeTextEdit() {
    if (QMdiSubWindow *activeSubWindow = ui->mdiArea->activeSubWindow()) {
        return qobject_cast<QTextEdit*>(activeSubWindow->widget());
    }
    return nullptr;
}

bool Notepad::maybeSave(QTextEdit *edit)
{
    if (!edit || !edit->document()->isModified()) {
        return true;
    }

    QString fileName = edit->property("filePath").toString();
    QString displayName = fileName.isEmpty() ? "Новый документ" : fileName;

    QMessageBox::StandardButton ret;
    ret = QMessageBox::warning(this, "Notepad",
                               QString("Файл '%1' содержит несохраненные изменения.\nСохранить их?").arg(displayName),
                               QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);

    if (ret == QMessageBox::Save) {
        for (QMdiSubWindow *sub : ui->mdiArea->subWindowList()) {
            if (sub->widget() == edit) {
                ui->mdiArea->setActiveSubWindow(sub);
                break;
            }
        }
        on_actionSave_triggered();
        return !edit->document()->isModified();
    } else if (ret == QMessageBox::Cancel) {
        return false;
    }
    return true;
}

void Notepad::closeEvent(QCloseEvent *event)
{
    for (QMdiSubWindow *subWindow : ui->mdiArea->subWindowList()) {
        QTextEdit *edit = qobject_cast<QTextEdit*>(subWindow->widget());

        if (!maybeSave(edit)) {
            event->ignore();
            return;
        }
    }

    event->accept();
}

void Notepad::on_actionNew_triggered()
{
    setupNewSubWindow("Новый документ");
}


void Notepad::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Открыть файл");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly | QFile::Text)) {
        QTextEdit *edit = setupNewSubWindow(fileName);

        edit->setProperty("filePath", fileName);

        edit->setText(QTextStream(&file).readAll());
        file.close();
        edit->document()->setModified(false);
    }
}


void Notepad::on_actionSave_triggered()
{
    QTextEdit *edit = activeTextEdit();
    if (!edit) return;

    QString fileName = edit->property("filePath").toString();

    if (fileName.isEmpty()) {
        fileName = QFileDialog::getSaveFileName(this, "Сохранить файл");
        if (fileName.isEmpty()) return;
        edit->setProperty("filePath", fileName);
        ui->mdiArea->activeSubWindow()->setWindowTitle(fileName);
    }

    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QFile::Text)) {
        QTextStream out(&file);
        out << edit->toPlainText();
        file.close();
        edit->document()->setModified(false);
    }
}


void Notepad::on_actionSaveAs_triggered()
{
    QTextEdit *edit = activeTextEdit();
    if (!edit) return;

    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить как...");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Ошибка", "Невозможно сохранить файл: " + file.errorString());
        return;
    }

    edit->setProperty("filePath", fileName);

    ui->mdiArea->activeSubWindow()->setWindowTitle(fileName);

    QTextStream out(&file);
    QString text = edit->toPlainText();
    out << text;
    file.close();

    edit->document()->setModified(false);
}


void Notepad::on_actionQuit_triggered()
{
    QTextEdit *edit = activeTextEdit();
    if (!edit) return;

    if (maybeSave(edit)) {
        QApplication::quit();
    }
}


void Notepad::on_actionCancel_triggered()
{
    QTextEdit *edit = activeTextEdit();
    if (!edit) return;
    edit->undo();
}


void Notepad::on_actionRepeat_triggered()
{
    QTextEdit *edit = activeTextEdit();
    if (!edit) return;
    edit->redo();
}


void Notepad::on_actionCopy_triggered()
{
    QTextEdit *edit = activeTextEdit();
    if (!edit) return;
    edit->copy();
}


void Notepad::on_actionCut_triggered()
{
    QTextEdit *edit = activeTextEdit();
    if (!edit) return;
    edit->cut();
}


void Notepad::on_actionPaste_triggered()
{
    QTextEdit *edit = activeTextEdit();
    if (!edit) return;
    edit->paste();
}


void Notepad::on_actionFind_triggered()
{
    QTextEdit *edit = activeTextEdit();
    if (!edit) return;

    bool ok;
    QString text = QInputDialog::getText(this, "Поиск", "Что найти:", QLineEdit::Normal, "", &ok);

    if (ok && !text.isEmpty()) {
        if (!edit->find(text)) {
            QMessageBox::information(this, "Поиск", "Текст не найден.");
        }
    }
}


void Notepad::on_actionGoToLine_triggered()
{
    QTextEdit *edit = activeTextEdit();
    if (!edit) return;

    bool ok;
    int lineCount = edit->document()->blockCount();

    int lineNumber = QInputDialog::getInt(this, "Перейти к строке", "Номер строки:", 1, 1, lineCount, 1, &ok);

    if (ok) {
        QTextBlock block = edit->document()->findBlockByNumber(lineNumber - 1);

        QTextCursor cursor(block);
        edit->setTextCursor(cursor);
    }
}


void Notepad::on_actionFont_triggered()
{
    QTextEdit *edit = activeTextEdit();
    if (!edit) return;

    bool ok;
    QFont font = QFontDialog::getFont(&ok, edit->font(), this);
    if (ok) {
        edit->setFont(font);
    }
}


void Notepad::on_actionLeft_triggered()
{
    QTextEdit *edit = activeTextEdit();
    if (!edit) return;
    edit->setAlignment(Qt::AlignLeft);

}


void Notepad::on_actionCenter_triggered()
{
    QTextEdit *edit = activeTextEdit();
    if (!edit) return;
    edit->setAlignment(Qt::AlignCenter);
}


void Notepad::on_actionRight_triggered()
{
    QTextEdit *edit = activeTextEdit();
    if (!edit) return;
    edit->setAlignment(Qt::AlignRight);
}



void Notepad::on_actionCascade_triggered()
{
    ui->mdiArea->cascadeSubWindows();
}


void Notepad::on_actionTile_triggered()
{
    ui->mdiArea->tileSubWindows();
}

