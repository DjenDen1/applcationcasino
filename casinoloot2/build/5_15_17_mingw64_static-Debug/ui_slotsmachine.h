/********************************************************************************
** Form generated from reading UI file 'slotsmachine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLOTSMACHINE_H
#define UI_SLOTSMACHINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SlotsMachine
{
public:

    void setupUi(QWidget *SlotsMachine)
    {
        if (SlotsMachine->objectName().isEmpty())
            SlotsMachine->setObjectName(QString::fromUtf8("SlotsMachine"));
        SlotsMachine->resize(400, 300);

        retranslateUi(SlotsMachine);

        QMetaObject::connectSlotsByName(SlotsMachine);
    } // setupUi

    void retranslateUi(QWidget *SlotsMachine)
    {
        SlotsMachine->setWindowTitle(QCoreApplication::translate("SlotsMachine", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SlotsMachine: public Ui_SlotsMachine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLOTSMACHINE_H
