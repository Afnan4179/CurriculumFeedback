#ifndef SEARCHSTUDENT_H
#define SEARCHSTUDENT_H
#include "searchstudent2.h"

#include <QDialog>

namespace Ui {
class searchstudent;
}

class searchstudent : public QDialog
{
    Q_OBJECT

public:
    explicit searchstudent(QWidget *parent = nullptr);
    ~searchstudent();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::searchstudent *ui;
    searchstudent2 *ptrsearchstudent2;
};

#endif // SEARCHSTUDENT_H
