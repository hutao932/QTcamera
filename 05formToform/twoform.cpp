#include "twoform.h"
#include "ui_twoform.h"
#include "comoneform.h"
#include "comthreeform.h"
#include "comfourform.h"
#include "comsevenform.h"
twoform::twoform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::twoform)
{
    ui->setupUi(this);
}

twoform::~twoform()
{
    delete ui;
}

void twoform::on_btn_go1form_clicked()
{
    this->hide();
   // ComOneForm::p_oneform->show();
    ComFourForm::p_fourform->show();

}

void twoform::on_btn_go3form_clicked()
{
    this->hide();
    //ComThreeForm::p_threeform->show();
    ComSevenForm::p_senvenform->show();
}
