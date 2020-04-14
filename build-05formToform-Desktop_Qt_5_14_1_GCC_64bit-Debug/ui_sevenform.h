/********************************************************************************
** Form generated from reading UI file 'sevenform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEVENFORM_H
#define UI_SEVENFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sevenform
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;

    void setupUi(QWidget *sevenform)
    {
        if (sevenform->objectName().isEmpty())
            sevenform->setObjectName(QString::fromUtf8("sevenform"));
        sevenform->resize(383, 255);
        pushButton = new QPushButton(sevenform);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 30, 89, 25));
        lineEdit = new QLineEdit(sevenform);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 30, 201, 25));
        widget = new QWidget(sevenform);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 100, 296, 91));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        verticalLayout_2->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        verticalLayout_2->addWidget(lineEdit_7);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(sevenform);

        QMetaObject::connectSlotsByName(sevenform);
    } // setupUi

    void retranslateUi(QWidget *sevenform)
    {
        sevenform->setWindowTitle(QCoreApplication::translate("sevenform", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("sevenform", "\346\237\245\346\211\276", nullptr));
        lineEdit->setText(QCoreApplication::translate("sevenform", "\346\220\234\347\264\242\347\224\250\346\210\267\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sevenform: public Ui_sevenform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEVENFORM_H
