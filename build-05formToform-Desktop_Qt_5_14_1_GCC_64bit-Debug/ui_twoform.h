/********************************************************************************
** Form generated from reading UI file 'twoform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWOFORM_H
#define UI_TWOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_twoform
{
public:
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_go1form;
    QPushButton *btn_go3form;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *twoform)
    {
        if (twoform->objectName().isEmpty())
            twoform->setObjectName(QString::fromUtf8("twoform"));
        twoform->resize(400, 300);
        label_2 = new QLabel(twoform);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 100, 351, 31));
        layoutWidget = new QWidget(twoform);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 150, 82, 70));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_go1form = new QPushButton(layoutWidget);
        btn_go1form->setObjectName(QString::fromUtf8("btn_go1form"));

        verticalLayout->addWidget(btn_go1form);

        btn_go3form = new QPushButton(layoutWidget);
        btn_go3form->setObjectName(QString::fromUtf8("btn_go3form"));

        verticalLayout->addWidget(btn_go3form);

        layoutWidget1 = new QWidget(twoform);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 70, 244, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(twoform);

        QMetaObject::connectSlotsByName(twoform);
    } // setupUi

    void retranslateUi(QWidget *twoform)
    {
        twoform->setWindowTitle(QCoreApplication::translate("twoform", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("twoform", "<html><head/><body><p><span style=\" color:#cc0000;\">\346\257\217\344\270\252\344\272\272\347\224\250\346\210\267\344\273\205\346\224\257\346\214\201\346\263\250\345\206\214\344\270\200\345\274\240\344\272\272\350\204\270\357\274\214\346\234\200\345\244\247\347\224\250\346\210\267\346\225\2601000\344\270\252</span></p></body></html>", nullptr));
        btn_go1form->setText(QCoreApplication::translate("twoform", "\346\263\250\345\206\214\347\224\250\346\210\267", nullptr));
        btn_go3form->setText(QCoreApplication::translate("twoform", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        label->setText(QCoreApplication::translate("twoform", "\347\216\260\345\234\250\347\224\250\346\210\267\346\225\260\351\207\217:", nullptr));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class twoform: public Ui_twoform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWOFORM_H
