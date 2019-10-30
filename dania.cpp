#include "dania.h"
#include "ui_dania.h"
#include "QMessageBox"
#include "QPixmap"


dania::dania(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dania)
{
    ui->setupUi(this);

    QPixmap pix4(":/img/img/mielone.png");
    int a = 230;
    ui->label_mielone->setPixmap(pix4.scaled(a,a,Qt::KeepAspectRatio));

    QPixmap pix5(":/img/img/nalesniki.png");
    ui->label_nalesniki->setPixmap(pix5.scaled(a,a,Qt::KeepAspectRatio));

    QPixmap pix6(":/img/img/pierogi.png");
    ui->label_pierogi->setPixmap(pix6.scaled(a,a,Qt::KeepAspectRatio));

    QPixmap pix7(":/img/img/placki.png");
    ui->label_placki->setPixmap(pix7.scaled(a,a,Qt::KeepAspectRatio));

    QPixmap pix8(":/img/img/schabowe.png");
    ui->label_schabowe->setPixmap(pix8.scaled(a,a,Qt::KeepAspectRatio));

    QPixmap pix9(":/img/img/spagetti.png");
    ui->label_spagetti->setPixmap(pix9.scaled(a,a,Qt::KeepAspectRatio));
}

dania::~dania()
{
    delete ui;
}

