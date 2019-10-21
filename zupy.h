#ifndef ZUPY_H
#define ZUPY_H

#include <QMainWindow>

namespace Ui {
class zupy;
}

class zupy : public QMainWindow
{
    Q_OBJECT

public:
    explicit zupy(QWidget *parent = nullptr);
    ~zupy();

private slots:
    void on_commandLinkButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::zupy *ui;

};

#endif // ZUPY_H
