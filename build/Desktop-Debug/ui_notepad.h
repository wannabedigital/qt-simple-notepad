/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSaveAs;
    QAction *actionCancel;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionFont;
    QAction *actionLeft;
    QAction *actionCenter;
    QAction *actionRight;
    QAction *actionFind;
    QAction *actionGoToLine;
    QAction *actionSave;
    QAction *actionHelp;
    QAction *actionCut;
    QAction *actionRepeat;
    QAction *actionQuit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuAlign;
    QMenu *menuFind;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName("Notepad");
        Notepad->resize(854, 701);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Notepad->sizePolicy().hasHeightForWidth());
        Notepad->setSizePolicy(sizePolicy);
        Notepad->setMinimumSize(QSize(854, 0));
        Notepad->setMaximumSize(QSize(854, 16777215));
        actionNew = new QAction(Notepad);
        actionNew->setObjectName("actionNew");
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName("actionOpen");
        actionSaveAs = new QAction(Notepad);
        actionSaveAs->setObjectName("actionSaveAs");
        actionCancel = new QAction(Notepad);
        actionCancel->setObjectName("actionCancel");
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName("actionCopy");
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName("actionPaste");
        actionFont = new QAction(Notepad);
        actionFont->setObjectName("actionFont");
        actionLeft = new QAction(Notepad);
        actionLeft->setObjectName("actionLeft");
        actionCenter = new QAction(Notepad);
        actionCenter->setObjectName("actionCenter");
        actionRight = new QAction(Notepad);
        actionRight->setObjectName("actionRight");
        actionFind = new QAction(Notepad);
        actionFind->setObjectName("actionFind");
        actionGoToLine = new QAction(Notepad);
        actionGoToLine->setObjectName("actionGoToLine");
        actionSave = new QAction(Notepad);
        actionSave->setObjectName("actionSave");
        actionHelp = new QAction(Notepad);
        actionHelp->setObjectName("actionHelp");
        actionCut = new QAction(Notepad);
        actionCut->setObjectName("actionCut");
        actionRepeat = new QAction(Notepad);
        actionRepeat->setObjectName("actionRepeat");
        actionQuit = new QAction(Notepad);
        actionQuit->setObjectName("actionQuit");
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        Notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 854, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuAlign = new QMenu(menuView);
        menuAlign->setObjectName("menuAlign");
        menuFind = new QMenu(menubar);
        menuFind->setObjectName("menuFind");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName("statusbar");
        Notepad->setStatusBar(statusbar);
        toolBar = new QToolBar(Notepad);
        toolBar->setObjectName("toolBar");
        Notepad->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuFind->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionCancel);
        menuEdit->addAction(actionRepeat);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuView->addAction(actionFont);
        menuView->addAction(menuAlign->menuAction());
        menuAlign->addAction(actionLeft);
        menuAlign->addAction(actionCenter);
        menuAlign->addAction(actionRight);
        menuFind->addAction(actionFind);
        menuFind->addAction(actionGoToLine);
        menuHelp->addAction(actionHelp);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionCut);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        actionNew->setText(QCoreApplication::translate("Notepad", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("Notepad", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveAs->setText(QCoreApplication::translate("Notepad", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272", nullptr));
        actionCancel->setText(QCoreApplication::translate("Notepad", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        actionCancel->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("Notepad", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("Notepad", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont->setText(QCoreApplication::translate("Notepad", "\320\250\321\200\320\270\321\204\321\202", nullptr));
        actionLeft->setText(QCoreApplication::translate("Notepad", "\320\241\320\273\320\265\320\262\320\260", nullptr));
        actionCenter->setText(QCoreApplication::translate("Notepad", "\320\237\320\276 \321\206\320\265\320\275\321\202\321\200\321\203", nullptr));
        actionRight->setText(QCoreApplication::translate("Notepad", "\320\241\320\277\321\200\320\260\320\262\320\260", nullptr));
        actionFind->setText(QCoreApplication::translate("Notepad", "\320\237\320\276\320\270\321\201\320\272", nullptr));
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoToLine->setText(QCoreApplication::translate("Notepad", "\320\237\320\265\321\200\320\265\320\271\321\202\320\270 \320\272 \321\201\321\202\321\200\320\276\320\272\320\265", nullptr));
        actionSave->setText(QCoreApplication::translate("Notepad", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHelp->setText(QCoreApplication::translate("Notepad", "\320\237\320\276\320\274\320\276\321\211\321\214", nullptr));
        actionCut->setText(QCoreApplication::translate("Notepad", "\320\222\321\213\321\200\320\265\320\267\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRepeat->setText(QCoreApplication::translate("Notepad", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        actionRepeat->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("Notepad", "\320\222\321\213\321\205\320\276\320\264", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("Notepad", "\320\244\320\260\320\271\320\273", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Notepad", "\320\237\321\200\320\260\320\262\320\272\320\260", nullptr));
        menuView->setTitle(QCoreApplication::translate("Notepad", "\320\222\320\270\320\264", nullptr));
        menuAlign->setTitle(QCoreApplication::translate("Notepad", "\320\222\321\213\321\200\320\276\320\262\320\275\321\217\321\202\321\214", nullptr));
        menuFind->setTitle(QCoreApplication::translate("Notepad", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Notepad", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Notepad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
