/********************************************************************************
** Form generated from reading UI file 'roulette.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROULETTE_H
#define UI_ROULETTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_roulette
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *roulette)
    {
        if (roulette->objectName().isEmpty())
            roulette->setObjectName(QString::fromUtf8("roulette"));
        roulette->resize(800, 600);
        centralwidget = new QWidget(roulette);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        roulette->setCentralWidget(centralwidget);
        menubar = new QMenuBar(roulette);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        roulette->setMenuBar(menubar);
        statusbar = new QStatusBar(roulette);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        roulette->setStatusBar(statusbar);

        retranslateUi(roulette);

        QMetaObject::connectSlotsByName(roulette);
    } // setupUi

    void retranslateUi(QMainWindow *roulette)
    {
        roulette->setWindowTitle(QCoreApplication::translate("roulette", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class roulette: public Ui_roulette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROULETTE_H
