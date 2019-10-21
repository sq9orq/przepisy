#include "oknoglowne.h"
#include "ui_oknoglowne.h"
#include "QMessageBox"
#include "QPixmap"

oknoglowne::oknoglowne(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::oknoglowne)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/zupa.jpg");
    int w = 230;
    int h = 230;
    ui->label_zupy->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap pix1(":/img/img/danie.jpg");
    int x = 230;
    int i = 230;
    ui->label_dania->setPixmap(pix1.scaled(x,i,Qt::KeepAspectRatio));

    QPixmap pix2(":/img/img/deser.jpg");
    int y = 230;
    int j = 230;
    ui->label_desery->setPixmap(pix2.scaled(y,j,Qt::KeepAspectRatio));
}

oknoglowne::~oknoglowne()
{
    delete ui;
}

void oknoglowne::on_pushButton_zupy_clicked()
{
    hide();
    Zupy= new zupy(this);
    Zupy->show();
}

void oknoglowne::on_pushButton_dania_clicked()
{
    hide();
    Dania= new dania(this);
    Dania->show();
}

void oknoglowne::on_pushButton_desery_clicked()
{
    hide();
    Desery= new desery(this);
    Desery->show();
}
