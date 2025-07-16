/********************************************************************************
** Form generated from reading UI file 'slotmachine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLOTMACHINE_H
#define UI_SLOTMACHINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SlotMachine
{
public:

    void setupUi(QWidget *SlotMachine)
    {
        if (SlotMachine->objectName().isEmpty())
            SlotMachine->setObjectName(QString::fromUtf8("SlotMachine"));
        SlotMachine->resize(400, 300);

        retranslateUi(SlotMachine);

        QMetaObject::connectSlotsByName(SlotMachine);
    } // setupUi

    void retranslateUi(QWidget *SlotMachine)
    {
        SlotMachine->setWindowTitle(QCoreApplication::translate("SlotMachine", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SlotMachine: public Ui_SlotMachine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLOTMACHINE_H
