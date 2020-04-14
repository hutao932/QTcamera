#include "sixform.h"
#include "ui_sixform.h"

sixform::sixform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sixform)
{
    ui->setupUi(this);
}

sixform::~sixform()
{
    delete ui;
}
