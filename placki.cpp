#include "placki.h"
#include "ui_placki.h"

placki::placki(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::placki)
{
    ui->setupUi(this);
}

placki::~placki()
{
    delete ui;
}
