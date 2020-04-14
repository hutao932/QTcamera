#include "sevenform.h"
#include "ui_sevenform.h"

sevenform::sevenform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sevenform)
{
    ui->setupUi(this);
}

sevenform::~sevenform()
{
    delete ui;
}
