#ifndef DANIA_H
#define DANIA_H

#include <QMainWindow>
#include <placki.h>

namespace Ui {
class dania;
}

class dania : public QMainWindow
{
    Q_OBJECT

public:
    explicit dania(QWidget *parent = nullptr);
    ~dania();

private slots:
    void on_pushButton_powrot_clicked();

    void on_pushButton_placki_clicked();

private:
    Ui::dania *ui;
    placki *Placki;


};

#endif // DANIA_H
