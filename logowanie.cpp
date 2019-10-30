#include "logowanie.h"
#include "ui_logowanie.h"
#include "QMessageBox"
#include "QPixmap"

logowanie::logowanie(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::logowanie)
{
    ui->setupUi(this);
    QPixmap pix100(":/img/img/kucharz.gif");
    int w = ui->label_kucharz->width();
    int h = ui->label_kucharz->height();
    ui->label_kucharz->setPixmap(pix100.scaled(w,h,Qt::KeepAspectRatio));
}

logowanie::~logowanie()
{
    delete ui;
}


void logowanie::on_pushButton_zaloguj_clicked()
{
    QString login = ui -> lineEdit_login -> text();
    QString haslo = ui -> lineEdit_haslo -> text();

    if(login=="test" && haslo=="test") {
        QMessageBox::information(this, "zaloguj", "Nazwa użytkownika i hasło poprawne");
        hide();
        oknoGlowne= new oknoglowne(this);
        oknoGlowne->show();
    }
    else{
        QMessageBox::warning(this, "zaloguj", "Spróbuj jeszcze raz");
    }
}
