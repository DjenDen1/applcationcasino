/********************************************************************************
** Form generated from reading UI file 'automatgame.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOMATGAME_H
#define UI_AUTOMATGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutomatGame
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AutomatGame)
    {
        if (AutomatGame->objectName().isEmpty())
            AutomatGame->setObjectName(QString::fromUtf8("AutomatGame"));
        AutomatGame->resize(1600, 900);
        AutomatGame->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"	background-image: url(:/source/resource/automat.jpg);\n"
"}"));
        centralwidget = new QWidget(AutomatGame);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 0, 211, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:none;\n"
"color:white;\n"
"background-color:orange;\n"
"font: 600 10.5pt \"Liberation Serif\";\n"
"position: absolute;\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"    background-color:rgb(255,145,0);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(0,12,0);\n"
"	color:rgb(0,255,0);\n"
"	border-radius: 10px;\n"
"	\n"
"}"));
        AutomatGame->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AutomatGame);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1600, 21));
        AutomatGame->setMenuBar(menubar);
        statusbar = new QStatusBar(AutomatGame);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AutomatGame->setStatusBar(statusbar);

        retranslateUi(AutomatGame);

        QMetaObject::connectSlotsByName(AutomatGame);
    } // setupUi

    void retranslateUi(QMainWindow *AutomatGame)
    {
        AutomatGame->setWindowTitle(QCoreApplication::translate("AutomatGame", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AutomatGame", "\320\262\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\275\320\260 \320\277\321\200\320\276\321\210\320\273\321\213\320\271 \321\215\320\272\321\200\320\260\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutomatGame: public Ui_AutomatGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOMATGAME_H
