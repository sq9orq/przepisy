#ifndef LOGOWANIE_H
#define LOGOWANIE_H

#include <QMainWindow>
#include <oknoglowne.h>
#include "QKeyEvent"
#include "QEvent"

QT_BEGIN_NAMESPACE
namespace Ui { class logowanie; }
QT_END_NAMESPACE

class logowanie : public QMainWindow
{
    Q_OBJECT

public:
    logowanie(QWidget *parent = nullptr);
    ~logowanie();

private slots:
    void on_pushButton_zaloguj_clicked();
    void keyPressEvent(QKeyEvent *pe);

private:
    Ui::logowanie *ui;
    oknoglowne *oknoGlowne;
};
#endif // LOGOWANIE_H
