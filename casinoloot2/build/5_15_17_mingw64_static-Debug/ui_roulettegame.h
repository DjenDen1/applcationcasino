/********************************************************************************
** Form generated from reading UI file 'roulettegame.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROULETTEGAME_H
#define UI_ROULETTEGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RouletteGame
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *on_pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RouletteGame)
    {
        if (RouletteGame->objectName().isEmpty())
            RouletteGame->setObjectName(QString::fromUtf8("RouletteGame"));
        RouletteGame->resize(1295, 720);
        RouletteGame->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"\n"
"{\n"
"background-image: url(:/source/resource/backgroungroulette.png);\n"
"}"));
        centralwidget = new QWidget(RouletteGame);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 211, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        on_pushButton_2 = new QPushButton(centralwidget);
        on_pushButton_2->setObjectName(QString::fromUtf8("on_pushButton_2"));
        on_pushButton_2->setGeometry(QRect(0, 90, 211, 41));
        on_pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        RouletteGame->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RouletteGame);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1295, 21));
        RouletteGame->setMenuBar(menubar);
        statusbar = new QStatusBar(RouletteGame);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RouletteGame->setStatusBar(statusbar);

        retranslateUi(RouletteGame);

        QMetaObject::connectSlotsByName(RouletteGame);
    } // setupUi

    void retranslateUi(QMainWindow *RouletteGame)
    {
        RouletteGame->setWindowTitle(QCoreApplication::translate("RouletteGame", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("RouletteGame", "\320\262\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\275\320\260 \320\277\321\200\320\276\321\210\320\273\321\213\320\271 \321\215\320\272\321\200\320\260\320\275", nullptr));
        on_pushButton_2->setText(QCoreApplication::translate("RouletteGame", "\320\232\320\240\320\243\320\242\320\230\320\242\320\254 \320\240\320\243\320\233\320\225\320\242\320\232\320\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RouletteGame: public Ui_RouletteGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROULETTEGAME_H
