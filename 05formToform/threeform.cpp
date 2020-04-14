#include "threeform.h"
#include "ui_threeform.h"
#include "comoneform.h"
#include "comtwoform.h"
threeform::threeform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::threeform)
{
    ui->setupUi(this);
}

threeform::~threeform()
{
    delete ui;
}


/*
void threeform::on_btn_go1form_clicked()
{
    this->hide();
    ComOneForm::p_oneform->show();

}

void threeform::on_btn_go2form_clicked()
{
    this->hide();
   ComTwoForm::p_twoform->show();
}
*/

void threeform::on_radioButton_clicked()
{

}





