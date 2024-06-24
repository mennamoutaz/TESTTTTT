/********************************************************************************
** Form generated from reading UI file 'PlayerSelectionDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERSELECTIONDIALOG_H
#define UI_PLAYERSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QRadioButton *radioButtonX;
    QRadioButton *radioButtonO;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 10, 231, 51));
        radioButtonX = new QRadioButton(Dialog);
        radioButtonX->setObjectName("radioButtonX");
        radioButtonX->setGeometry(QRect(60, 120, 91, 22));
        radioButtonO = new QRadioButton(Dialog);
        radioButtonO->setObjectName("radioButtonO");
        radioButtonO->setGeometry(QRect(280, 120, 91, 22));
        okButton = new QPushButton(Dialog);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(30, 240, 80, 24));
        cancelButton = new QPushButton(Dialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(270, 240, 80, 24));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt;\">Please choose &quot;</span><span style=\" font-size:14pt; font-weight:700;\">X&quot;</span><span style=\" font-size:14pt;\"> OR &quot;</span><span style=\" font-size:14pt; font-weight:700;\">O&quot;</span></p></body></html>", nullptr));
        radioButtonX->setText(QCoreApplication::translate("Dialog", "x", nullptr));
        radioButtonO->setText(QCoreApplication::translate("Dialog", "o", nullptr));
        okButton->setText(QCoreApplication::translate("Dialog", "ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("Dialog", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERSELECTIONDIALOG_H
