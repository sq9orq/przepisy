#include "zupy.h"
#include "ui_zupy.h"

zupy::zupy(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::zupy)
{
    ui->setupUi(this);
}

zupy::~zupy()
{
    delete ui;
}

