#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui {
class Notepad;
}
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    Notepad(QWidget *parent = nullptr);
    ~Notepad();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSaveAs_triggered();

    void on_actionCancel_triggered();

    void on_actionRepeat_triggered();

    void on_actionCopy_triggered();

    void on_actionCut_triggered();

    void on_actionPaste_triggered();

    void on_actionFind_triggered();

    void on_actionGoToLine_triggered();

    void on_actionFont_triggered();

    void on_actionLeft_triggered();

    void on_actionCenter_triggered();

    void on_actionRight_triggered();

    void on_actionQuit_triggered();

    void on_actionCascade_triggered();

    void on_actionTile_triggered();

private:
    Ui::Notepad *ui;
    QTextEdit* setupNewSubWindow(QString title);
    QTextEdit* activeTextEdit();

    bool maybeSave(QTextEdit *edit);
};
#endif // NOTEPAD_H
