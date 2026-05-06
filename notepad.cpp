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

bool Notepad::maybeSave()
{
    if (!ui->textEdit->document()->isModified()) {
        return true;
    }

    QMessageBox::StandardButton ret;
    ret = QMessageBox::warning(this, "Notepad",
                               "Текущий файл содержит несохраненные изменения.\nСохранить их?",
                               QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);

    if (ret == QMessageBox::Save) {
        on_actionSave_triggered();
        return !ui->textEdit->document()->isModified();
    } else if (ret == QMessageBox::Cancel) {
        return false;
    }
    return true;
}

void Notepad::closeEvent(QCloseEvent *event)
{
    if (maybeSave()) {
        event->accept();
    } else {
        event->ignore();
    }
}

void Notepad::on_actionNew_triggered()
{
    if (!maybeSave()) return;

    currentFile.clear();
    ui->textEdit->setText(QString());

    ui->textEdit->document()->setModified(false);
}


void Notepad::on_actionOpen_triggered()
{
    if (!maybeSave()) return;

    QString fileName = QFileDialog::getOpenFileName(this, "Открыть файл");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    currentFile = fileName;

    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Ошибка", "Невозможно открыть файл: " + file.errorString());
        return;
    }

    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();

    ui->textEdit->document()->setModified(false);
}


void Notepad::on_actionSave_triggered()
{
    QString fileName;
    if (currentFile.isEmpty()) {
        fileName = QFileDialog::getSaveFileName(this, "Сохранить файл");
        currentFile = fileName;
    } else {
        fileName = currentFile;
    }

    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Ошибка", "Невозможно сохранить файл: " + file.errorString());
        return;
    }

    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();

    ui->textEdit->document()->setModified(false);
}


void Notepad::on_actionSaveAs_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить как...");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Ошибка", "Невозможно сохранить файл: " + file.errorString());
        return;
    }

    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();

    ui->textEdit->document()->setModified(false);
}


void Notepad::on_actionQuit_triggered()
{
    if (maybeSave()) {
        QApplication::quit();
    }
}


void Notepad::on_actionCancel_triggered()
{
    ui->textEdit->undo();
}


void Notepad::on_actionRepeat_triggered()
{
    ui->textEdit->redo();
}


void Notepad::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}


void Notepad::on_actionCut_triggered()
{
    ui->textEdit->cut();
}


void Notepad::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}


void Notepad::on_actionFind_triggered()
{
    bool ok;
    QString text = QInputDialog::getText(this, "Поиск", "Что найти:", QLineEdit::Normal, "", &ok);

    if (ok && !text.isEmpty()) {
        if (!ui->textEdit->find(text)) {
            QMessageBox::information(this, "Поиск", "Текст не найден.");
        }
    }
}


void Notepad::on_actionGoToLine_triggered()
{
    bool ok;
    int lineCount = ui->textEdit->document()->blockCount();

    int lineNumber = QInputDialog::getInt(this, "Перейти к строке", "Номер строки:", 1, 1, lineCount, 1, &ok);

    if (ok) {
        QTextBlock block = ui->textEdit->document()->findBlockByNumber(lineNumber - 1);

        QTextCursor cursor(block);
        ui->textEdit->setTextCursor(cursor);
    }
}


void Notepad::on_actionFont_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, ui->textEdit->font(), this);

    if (ok) {
        ui->textEdit->setFont(font);
    }
}


void Notepad::on_actionLeft_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignLeft);
}


void Notepad::on_actionCenter_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignCenter);
}


void Notepad::on_actionRight_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignRight);
}


