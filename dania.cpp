#include "dania.h"
#include "ui_dania.h"

dania::dania(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dania)
{
    ui->setupUi(this);
}

dania::~dania()
{
    delete ui;
}
