#ifndef DANIA_H
#define DANIA_H

#include <QMainWindow>
//#include <oknoglowne.h>


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

private:
    Ui::dania *ui;
//    oknoglowne *Oknoglowne;


};

#endif // DANIA_H
