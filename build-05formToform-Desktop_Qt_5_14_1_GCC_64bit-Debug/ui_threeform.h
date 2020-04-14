/********************************************************************************
** Form generated from reading UI file 'threeform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREEFORM_H
#define UI_THREEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_threeform
{
public:
    QLabel *label;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_2;
    QRadioButton *radioButton_3;
    QLabel *label_3;
    QLabel *label_4;
    QRadioButton *radioButton_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QLabel *label_10;
    QLabel *label_11;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QLabel *label_12;
    QLabel *label_13;

    void setupUi(QWidget *threeform)
    {
        if (threeform->objectName().isEmpty())
            threeform->setObjectName(QString::fromUtf8("threeform"));
        threeform->resize(400, 484);
        label = new QLabel(threeform);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 91, 41));
        radioButton = new QRadioButton(threeform);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(120, 30, 112, 23));
        radioButton->setChecked(true);
        radioButton->setAutoExclusive(false);
        radioButton_2 = new QRadioButton(threeform);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(200, 30, 112, 23));
        radioButton_2->setChecked(false);
        radioButton_2->setAutoExclusive(false);
        label_2 = new QLabel(threeform);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 161, 17));
        radioButton_3 = new QRadioButton(threeform);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(120, 90, 112, 23));
        radioButton_3->setAutoRepeat(false);
        radioButton_3->setAutoExclusive(true);
        label_3 = new QLabel(threeform);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 120, 201, 17));
        label_4 = new QLabel(threeform);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 80, 91, 41));
        radioButton_4 = new QRadioButton(threeform);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(200, 90, 112, 23));
        radioButton_4->setChecked(true);
        radioButton_4->setAutoExclusive(false);
        label_5 = new QLabel(threeform);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 190, 321, 17));
        label_6 = new QLabel(threeform);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 150, 91, 41));
        label_7 = new QLabel(threeform);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 260, 331, 17));
        label_8 = new QLabel(threeform);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 220, 91, 41));
        lineEdit = new QLineEdit(threeform);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 160, 113, 25));
        lineEdit_2 = new QLineEdit(threeform);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 230, 113, 25));
        label_9 = new QLabel(threeform);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 290, 111, 41));
        lineEdit_3 = new QLineEdit(threeform);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 300, 113, 25));
        label_10 = new QLabel(threeform);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 330, 331, 17));
        label_11 = new QLabel(threeform);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 370, 111, 17));
        radioButton_5 = new QRadioButton(threeform);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(130, 370, 112, 23));
        radioButton_5->setChecked(false);
        radioButton_5->setAutoRepeat(false);
        radioButton_6 = new QRadioButton(threeform);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(220, 370, 112, 23));
        radioButton_6->setChecked(true);
        radioButton_6->setAutoExclusive(false);
        label_12 = new QLabel(threeform);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 400, 281, 17));
        label_13 = new QLabel(threeform);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 430, 351, 31));

        retranslateUi(threeform);

        QMetaObject::connectSlotsByName(threeform);
    } // setupUi

    void retranslateUi(QWidget *threeform)
    {
        threeform->setWindowTitle(QCoreApplication::translate("threeform", "Form", nullptr));
        label->setText(QCoreApplication::translate("threeform", "\345\244\232\344\272\272\350\204\270\346\243\200\346\265\213:", nullptr));
        radioButton->setText(QCoreApplication::translate("threeform", "\345\205\263\351\227\255", nullptr));
        radioButton_2->setText(QCoreApplication::translate("threeform", "\345\274\200\345\220\257", nullptr));
        label_2->setText(QCoreApplication::translate("threeform", "\346\234\200\345\244\247\346\224\257\346\214\201\345\220\214\346\227\26610\344\272\272\346\243\200\346\265\213", nullptr));
        radioButton_3->setText(QCoreApplication::translate("threeform", "\345\205\263\351\227\255", nullptr));
        label_3->setText(QCoreApplication::translate("threeform", "\345\220\214\346\227\266\345\220\257\347\224\250RGB+IR\345\217\214\346\250\241\346\200\201\346\264\273\344\275\223", nullptr));
        label_4->setText(QCoreApplication::translate("threeform", "\346\264\273\344\275\223\346\243\200\346\265\213:", nullptr));
        radioButton_4->setText(QCoreApplication::translate("threeform", "\345\274\200\345\220\257", nullptr));
        label_5->setText(QCoreApplication::translate("threeform", "0-1\357\274\214\346\264\273\344\275\223\351\230\210\345\200\274\350\266\212\345\244\247\357\274\214\345\256\211\345\205\250\346\200\247\350\266\212\351\253\230\357\274\214\351\200\232\350\277\207\347\216\207\350\266\212\344\275\216", nullptr));
        label_6->setText(QCoreApplication::translate("threeform", "\346\264\273\344\275\223\351\230\210\345\200\274:", nullptr));
        label_7->setText(QCoreApplication::translate("threeform", "0-100\357\274\214\350\257\206\345\210\253\351\230\210\345\200\274\350\266\212\345\244\247\357\274\214\350\257\257\350\257\206\347\216\207\350\266\212\344\275\216\357\274\214\351\200\232\350\277\207\347\216\207\350\266\212\344\275\216", nullptr));
        label_8->setText(QCoreApplication::translate("threeform", "\350\257\206\345\210\253\351\230\210\345\200\274:", nullptr));
        label_9->setText(QCoreApplication::translate("threeform", "\346\234\200\345\260\217\344\272\272\350\204\270\346\243\200\346\265\213:", nullptr));
        label_10->setText(QCoreApplication::translate("threeform", "\346\216\250\350\215\220\344\270\215\344\275\216\344\272\21630px\357\274\214\346\225\260\345\200\274\350\266\212\345\244\247\357\274\214\345\217\257\346\243\200\346\265\213\350\267\235\347\246\273\350\266\212\345\260\217", nullptr));
        label_11->setText(QCoreApplication::translate("threeform", "\351\251\276\351\251\266\350\241\214\344\270\272\346\243\200\346\265\213:", nullptr));
        radioButton_5->setText(QCoreApplication::translate("threeform", "\345\205\263\351\227\255", nullptr));
        radioButton_6->setText(QCoreApplication::translate("threeform", "\345\274\200\345\220\257", nullptr));
        label_12->setText(QCoreApplication::translate("threeform", "\345\214\205\345\220\253\347\226\262\345\212\263\347\233\221\346\265\213\343\200\201\346\212\275\347\203\237\343\200\201\346\211\223\346\211\213\346\234\272\345\210\244\346\226\255", nullptr));
        label_13->setText(QCoreApplication::translate("threeform", "<html><head/><body><p><span style=\" color:#cc0000;\">\346\233\264\345\244\232\351\253\230\347\272\247\350\256\276\347\275\256\357\274\214\350\257\267\345\217\202\350\200\203HTTP\346\216\245\345\217\243\346\226\207\346\241\243\350\277\233\350\241\214\350\260\203\347\224\250\346\265\213\350\257\225</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class threeform: public Ui_threeform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREEFORM_H
