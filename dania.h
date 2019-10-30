#ifndef DANIA_H
#define DANIA_H

#include <QMainWindow>


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

};

#endif // DANIA_H
