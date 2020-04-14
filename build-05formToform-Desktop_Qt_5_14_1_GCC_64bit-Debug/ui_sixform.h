/********************************************************************************
** Form generated from reading UI file 'sixform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIXFORM_H
#define UI_SIXFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sixform
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *sixform)
    {
        if (sixform->objectName().isEmpty())
            sixform->setObjectName(QString::fromUtf8("sixform"));
        sixform->resize(400, 300);
        label = new QLabel(sixform);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 40, 161, 51));
        lineEdit = new QLineEdit(sixform);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 100, 131, 101));
        lineEdit_2 = new QLineEdit(sixform);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 220, 113, 25));

        retranslateUi(sixform);

        QMetaObject::connectSlotsByName(sixform);
    } // setupUi

    void retranslateUi(QWidget *sixform)
    {
        sixform->setWindowTitle(QCoreApplication::translate("sixform", "Form", nullptr));
        label->setText(QCoreApplication::translate("sixform", "<html><head/><body><p><span style=\" font-size:20pt; color:#204a87;\">\346\263\250\345\206\214\346\210\220\345\212\237!</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sixform: public Ui_sixform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIXFORM_H
