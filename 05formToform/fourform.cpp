#include "fourform.h"
#include "ui_fourform.h"
#include  "comfiveform.h"

fourForm::fourForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fourForm)
{
    ui->setupUi(this);
}

fourForm::~fourForm()
{
    delete ui;
}

void fourForm::on_btn_go5form_clicked()
{
    this->hide();
    ComFiveForm::p_fiveform->show();
}
