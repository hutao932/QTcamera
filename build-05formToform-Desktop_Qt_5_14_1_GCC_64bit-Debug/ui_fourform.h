/********************************************************************************
** Form generated from reading UI file 'fourform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURFORM_H
#define UI_FOURFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fourForm
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *btn_go5form;

    void setupUi(QWidget *fourForm)
    {
        if (fourForm->objectName().isEmpty())
            fourForm->setObjectName(QString::fromUtf8("fourForm"));
        fourForm->resize(430, 244);
        lineEdit = new QLineEdit(fourForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 60, 281, 25));
        label = new QLabel(fourForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 90, 341, 31));
        btn_go5form = new QPushButton(fourForm);
        btn_go5form->setObjectName(QString::fromUtf8("btn_go5form"));
        btn_go5form->setGeometry(QRect(150, 140, 89, 25));

        retranslateUi(fourForm);

        QMetaObject::connectSlotsByName(fourForm);
    } // setupUi

    void retranslateUi(QWidget *fourForm)
    {
        fourForm->setWindowTitle(QCoreApplication::translate("fourForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("fourForm", "<html><head/><body><p><span style=\" color:#cc0000;\">\344\273\205\346\224\257\346\214\201\344\270\255\346\226\207\357\274\214\350\213\261\346\226\207\357\274\214\346\225\260\345\255\227\357\274\214\351\207\217\351\225\277\344\270\215\350\266\205\350\277\20750\344\270\252\345\255\227\347\254\246\343\200\202</span></p></body></html>", nullptr));
        btn_go5form->setText(QCoreApplication::translate("fourForm", "\344\270\213\344\270\200\346\255\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fourForm: public Ui_fourForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURFORM_H
