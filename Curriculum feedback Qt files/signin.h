#ifndef SIGNIN_H
#define SIGNIN_H
#include <QDialog>
#include "adminfuctions.h"

namespace Ui {
class signin;
}

class signin : public QDialog
{
    Q_OBJECT

public:
    explicit signin(QWidget *parent = nullptr);
    ~signin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::signin *ui;
    AdminFuctions *ptradminfuctions;
};

#endif // SIGNIN_H
