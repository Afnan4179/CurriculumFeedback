#ifndef SEARCHINFORM_H
#define SEARCHINFORM_H
#include "searchinform2.h"
#include <QDialog>

namespace Ui {
class Searchinform;
}

class Searchinform : public QDialog
{
    Q_OBJECT

public:
    explicit Searchinform(QWidget *parent = nullptr);
    ~Searchinform();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Searchinform *ui;
    searchinform2 *ptrsearchinform2;
};

#endif // SEARCHINFORM_H
