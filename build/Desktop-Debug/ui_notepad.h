/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_9;
    QAction *action_10;
    QAction *action_11;
    QAction *action_12;
    QAction *action_13;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_6;
    QStatusBar *statusbar;

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
        action = new QAction(Notepad);
        action->setObjectName("action");
        action_2 = new QAction(Notepad);
        action_2->setObjectName("action_2");
        action_3 = new QAction(Notepad);
        action_3->setObjectName("action_3");
        action_4 = new QAction(Notepad);
        action_4->setObjectName("action_4");
        action_5 = new QAction(Notepad);
        action_5->setObjectName("action_5");
        action_6 = new QAction(Notepad);
        action_6->setObjectName("action_6");
        action_7 = new QAction(Notepad);
        action_7->setObjectName("action_7");
        action_9 = new QAction(Notepad);
        action_9->setObjectName("action_9");
        action_10 = new QAction(Notepad);
        action_10->setObjectName("action_10");
        action_11 = new QAction(Notepad);
        action_11->setObjectName("action_11");
        action_12 = new QAction(Notepad);
        action_12->setObjectName("action_12");
        action_13 = new QAction(Notepad);
        action_13->setObjectName("action_13");
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
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        menu_4 = new QMenu(menu_3);
        menu_4->setObjectName("menu_4");
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName("menu_5");
        menu_6 = new QMenu(menubar);
        menu_6->setObjectName("menu_6");
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName("statusbar");
        Notepad->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_5->menuAction());
        menubar->addAction(menu_6->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu_2->addAction(action_4);
        menu_2->addAction(action_5);
        menu_2->addAction(action_6);
        menu_3->addAction(action_7);
        menu_3->addAction(menu_4->menuAction());
        menu_4->addAction(action_9);
        menu_4->addAction(action_10);
        menu_4->addAction(action_11);
        menu_5->addAction(action_12);
        menu_5->addAction(action_13);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        action->setText(QCoreApplication::translate("Notepad", "\320\235\320\276\320\262\321\213\320\271", nullptr));
        action_2->setText(QCoreApplication::translate("Notepad", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        action_3->setText(QCoreApplication::translate("Notepad", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272", nullptr));
        action_4->setText(QCoreApplication::translate("Notepad", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        action_5->setText(QCoreApplication::translate("Notepad", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        action_6->setText(QCoreApplication::translate("Notepad", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
        action_7->setText(QCoreApplication::translate("Notepad", "\320\250\321\200\320\270\321\204\321\202", nullptr));
        action_9->setText(QCoreApplication::translate("Notepad", "\320\241\320\273\320\265\320\262\320\260", nullptr));
        action_10->setText(QCoreApplication::translate("Notepad", "\320\237\320\276 \321\206\320\265\320\275\321\202\321\200\321\203", nullptr));
        action_11->setText(QCoreApplication::translate("Notepad", "\320\241\320\277\321\200\320\260\320\262\320\260", nullptr));
        action_12->setText(QCoreApplication::translate("Notepad", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        action_13->setText(QCoreApplication::translate("Notepad", "\320\237\320\265\321\200\320\265\320\271\321\202\320\270 \320\272 \321\201\321\202\321\200\320\276\320\272\320\265", nullptr));
        menu->setTitle(QCoreApplication::translate("Notepad", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("Notepad", "\320\237\321\200\320\260\320\262\320\272\320\260", nullptr));
        menu_3->setTitle(QCoreApplication::translate("Notepad", "\320\222\320\270\320\264", nullptr));
        menu_4->setTitle(QCoreApplication::translate("Notepad", "\320\222\321\213\321\200\320\276\320\262\320\275\321\217\321\202\321\214", nullptr));
        menu_5->setTitle(QCoreApplication::translate("Notepad", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        menu_6->setTitle(QCoreApplication::translate("Notepad", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
