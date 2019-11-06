#ifndef PLACKI_H
#define PLACKI_H

#include <QMainWindow>

namespace Ui {
class placki;
}

class placki : public QMainWindow
{
    Q_OBJECT

public:
    explicit placki(QWidget *parent = nullptr);
    ~placki();

private:
    Ui::placki *ui;
};

#endif // PLACKI_H
