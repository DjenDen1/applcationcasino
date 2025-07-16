/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QPushButton *BetButtonUL;
    QLCDNumber *lcd1;
    QLCDNumber *lcd2;
    QPushButton *BetButtonUL_2;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(497, 198);
        BetButtonUL = new QPushButton(Settings);
        BetButtonUL->setObjectName(QString::fromUtf8("BetButtonUL"));
        BetButtonUL->setGeometry(QRect(10, 20, 211, 61));
        BetButtonUL->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:none;\n"
"color:white;\n"
"background-color:rgb(0,128,0);\n"
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
        lcd1 = new QLCDNumber(Settings);
        lcd1->setObjectName(QString::fromUtf8("lcd1"));
        lcd1->setGeometry(QRect(230, 20, 221, 61));
        lcd1->setSmallDecimalPoint(true);
        lcd1->setDigitCount(4);
        lcd2 = new QLCDNumber(Settings);
        lcd2->setObjectName(QString::fromUtf8("lcd2"));
        lcd2->setGeometry(QRect(230, 90, 221, 61));
        lcd2->setSmallDecimalPoint(true);
        lcd2->setDigitCount(4);
        BetButtonUL_2 = new QPushButton(Settings);
        BetButtonUL_2->setObjectName(QString::fromUtf8("BetButtonUL_2"));
        BetButtonUL_2->setGeometry(QRect(10, 90, 211, 61));
        BetButtonUL_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:none;\n"
"color:white;\n"
"background-color:rgb(0,128,0);\n"
"font: 600 14pt \"Liberation Serif\";\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"	border:none;\n"
"	color:white\n"
" 	background-color:rgb(0,128,0);\n"
"	font: 600 14pt \"Liberation Serif\";\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	border:none;\n"
"	color:white;\n"
"	background-color:rgb(0,128,0);\n"
"	font: 600 14pt \"Liberation Serif\";\n"
"	border-radius: 10px;\n"
"	\n"
"}"));

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Dialog", nullptr));
        BetButtonUL->setText(QCoreApplication::translate("Settings", "\320\241\321\202\320\260\320\262\320\272\320\260", nullptr));
        BetButtonUL_2->setText(QCoreApplication::translate("Settings", "\320\221\320\260\320\273\320\260\320\275\321\201 \320\244\320\270\321\210\320\265\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
