#include "oneform.h"
#include "ui_oneform.h"
#include "comtwoform.h"
#include"comthreeform.h"
oneform::oneform(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::oneform)
{
    ui->setupUi(this);
}

oneform::~oneform()
{
    delete ui;
}


void oneform::on_btn_go2form_clicked()
{
    this->hide();
    ComTwoForm::p_twoform->show();
}

void oneform::on_btn_go3form_clicked()
{
    this->hide();
 ComThreeForm::p_threeform->show();
}
