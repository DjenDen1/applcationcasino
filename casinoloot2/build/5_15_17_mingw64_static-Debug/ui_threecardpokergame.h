/********************************************************************************
** Form generated from reading UI file 'threecardpokergame.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREECARDPOKERGAME_H
#define UI_THREECARDPOKERGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThreeCardPokerGame
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ThreeCardPokerGame)
    {
        if (ThreeCardPokerGame->objectName().isEmpty())
            ThreeCardPokerGame->setObjectName(QString::fromUtf8("ThreeCardPokerGame"));
        ThreeCardPokerGame->resize(800, 600);
        ThreeCardPokerGame->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"\n"
"\n"
"	background-image: url(:/source/resource/blackjack.jpg);\n"
"}"));
        centralwidget = new QWidget(ThreeCardPokerGame);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(340, 250, 111, 91));
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
        ThreeCardPokerGame->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ThreeCardPokerGame);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ThreeCardPokerGame->setMenuBar(menubar);
        statusbar = new QStatusBar(ThreeCardPokerGame);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ThreeCardPokerGame->setStatusBar(statusbar);

        retranslateUi(ThreeCardPokerGame);

        QMetaObject::connectSlotsByName(ThreeCardPokerGame);
    } // setupUi

    void retranslateUi(QMainWindow *ThreeCardPokerGame)
    {
        ThreeCardPokerGame->setWindowTitle(QCoreApplication::translate("ThreeCardPokerGame", "MainWindow", nullptr));
        textEdit->setHtml(QCoreApplication::translate("ThreeCardPokerGame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	\320\227\320\224\320\225\320\241\320\254 \320\237\320\236\320\232\320\220 \320\235\320\230\320\247\320\225\320\223\320\236 \320\235\320\225\320\242</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0p"
                        "x; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("ThreeCardPokerGame", "\320\262\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\275\320\260 \320\277\321\200\320\276\321\210\320\273\321\213\320\271 \321\215\320\272\321\200\320\260\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThreeCardPokerGame: public Ui_ThreeCardPokerGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREECARDPOKERGAME_H
