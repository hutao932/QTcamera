/********************************************************************************
** Form generated from reading UI file 'oneform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEFORM_H
#define UI_ONEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oneform
{
public:
    QLabel *label;
    QPushButton *btn_go2form;
    QPushButton *btn_go3form;
    QLabel *label_2;

    void setupUi(QWidget *oneform)
    {
        if (oneform->objectName().isEmpty())
            oneform->setObjectName(QString::fromUtf8("oneform"));
        oneform->resize(615, 308);
        label = new QLabel(oneform);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 81, 41));
        btn_go2form = new QPushButton(oneform);
        btn_go2form->setObjectName(QString::fromUtf8("btn_go2form"));
        btn_go2form->setGeometry(QRect(320, 20, 155, 31));
        btn_go3form = new QPushButton(oneform);
        btn_go3form->setObjectName(QString::fromUtf8("btn_go3form"));
        btn_go3form->setGeometry(QRect(490, 20, 121, 31));
        label_2 = new QLabel(oneform);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 101, 61));

        retranslateUi(oneform);

        QMetaObject::connectSlotsByName(oneform);
    } // setupUi

    void retranslateUi(QWidget *oneform)
    {
        oneform->setWindowTitle(QCoreApplication::translate("oneform", "oneform", nullptr));
        label->setText(QCoreApplication::translate("oneform", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\211\210\346\234\254:V1.0</span></p></body></html>", nullptr));
        btn_go2form->setText(QCoreApplication::translate("oneform", "\344\272\272\350\204\270\345\272\223\347\256\241\347\220\206", nullptr));
        btn_go3form->setText(QCoreApplication::translate("oneform", "\350\256\276\347\275\256", nullptr));
        label_2->setText(QCoreApplication::translate("oneform", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\236\213\345\217\267:B1</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oneform: public Ui_oneform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEFORM_H
