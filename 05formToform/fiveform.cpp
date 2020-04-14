#include "fiveform.h"
#include "ui_fiveform.h"

fiveform::fiveform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fiveform)
{
    ui->setupUi(this);
}

fiveform::~fiveform()
{
    delete ui;
}
