#ifndef OKNOGLOWNE_H
#define OKNOGLOWNE_H

#include <QMainWindow>
#include <zupy.h>
#include <dania.h>
#include <desery.h>

namespace Ui {
class oknoglowne;
}

class oknoglowne : public QMainWindow
{
    Q_OBJECT

public:
    explicit oknoglowne(QWidget *parent = nullptr);
    ~oknoglowne();

private slots:
    void on_pushButton_zupy_clicked();

    void on_pushButton_dania_clicked();

    void on_pushButton_desery_clicked();

private:
    Ui::oknoglowne *ui;
    zupy *Zupy;
    dania *Dania;
    desery *Desery;
};

#endif // OKNOGLOWNE_H
