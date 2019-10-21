#include "desery.h"
#include "ui_desery.h"

desery::desery(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::desery)
{
    ui->setupUi(this);
}

desery::~desery()
{
    delete ui;
}
