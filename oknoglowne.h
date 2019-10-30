#ifndef OKNOGLOWNE_H
#define OKNOGLOWNE_H

#include <QMainWindow>
#include <dania.h>

QT_BEGIN_NAMESPACE
namespace Ui {class oknoglowne;}
QT_END_NAMESPACE

class oknoglowne : public QMainWindow
{
    Q_OBJECT

public:
    explicit oknoglowne(QWidget *parent = nullptr);
    ~oknoglowne();

private slots:
    void on_pushButton_dania_clicked();

private:
    Ui::oknoglowne *ui;
    dania *Dania;
};

#endif // OKNOGLOWNE_H
