#ifndef DESERY_H
#define DESERY_H

#include <QMainWindow>

namespace Ui {
class desery;
}

class desery : public QMainWindow
{
    Q_OBJECT

public:
    explicit desery(QWidget *parent = nullptr);
    ~desery();

private:
    Ui::desery *ui;
};

#endif // DESERY_H
