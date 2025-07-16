/********************************************************************************
** Form generated from reading UI file 'reference.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFERENCE_H
#define UI_REFERENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RefeRence
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RefeRence)
    {
        if (RefeRence->objectName().isEmpty())
            RefeRence->setObjectName(QString::fromUtf8("RefeRence"));
        RefeRence->resize(800, 600);
        RefeRence->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"border:none;\n"
"color:white;\n"
"background-color:orange;\n"
"border-radius:50px;\n"
"font: 800 36pt \"Liberation Serif\";\n"
"min-width: 100px;\n"
"min-height: 40px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"    background-color:rgb(255,145,0);\n"
"	border-radius:50px;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(0,12,0);\n"
"	color:rgb(0,255,0);\n"
"\n"
"\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(RefeRence);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 69, 311, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:none;\n"
"color:white;\n"
"background-color:orange;\n"
"font: 600 14pt \"Liberation Serif\";\n"
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
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 120, 311, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:none;\n"
"color:white;\n"
"background-color:orange;\n"
"font: 600 14pt \"Liberation Serif\";\n"
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
        RefeRence->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RefeRence);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        RefeRence->setMenuBar(menubar);
        statusbar = new QStatusBar(RefeRence);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RefeRence->setStatusBar(statusbar);

        retranslateUi(RefeRence);

        QMetaObject::connectSlotsByName(RefeRence);
    } // setupUi

    void retranslateUi(QMainWindow *RefeRence)
    {
        RefeRence->setWindowTitle(QCoreApplication::translate("RefeRence", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("RefeRence", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\262\320\265\321\200\321\201\320\270\320\270 #1.0", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RefeRence", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\262\320\265\321\200\321\201\320\270\320\270 #1.1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RefeRence: public Ui_RefeRence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFERENCE_H
