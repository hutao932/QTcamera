/********************************************************************************
** Form generated from reading UI file 'fiveform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIVEFORM_H
#define UI_FIVEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fiveform
{
public:
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *fiveform)
    {
        if (fiveform->objectName().isEmpty())
            fiveform->setObjectName(QString::fromUtf8("fiveform"));
        fiveform->resize(400, 300);
        label = new QLabel(fiveform);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 321, 51));
        lineEdit = new QLineEdit(fiveform);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 100, 161, 101));

        retranslateUi(fiveform);

        QMetaObject::connectSlotsByName(fiveform);
    } // setupUi

    void retranslateUi(QWidget *fiveform)
    {
        fiveform->setWindowTitle(QCoreApplication::translate("fiveform", "Form", nullptr));
        label->setText(QCoreApplication::translate("fiveform", "<html><head/><body><p><span style=\" color:#cc0000;\">\350\257\267\345\260\206\344\272\272\350\204\270\347\275\256\344\272\216\344\270\213\346\226\271\347\232\204\346\241\206\345\206\205\357\274\214\345\271\266\344\277\235\346\214\201\346\255\243\350\247\206\345\211\215\346\226\271</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fiveform: public Ui_fiveform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIVEFORM_H
