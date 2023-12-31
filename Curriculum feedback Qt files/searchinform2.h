#ifndef SEARCHINFORM2_H
#define SEARCHINFORM2_H

#include <QDialog>

namespace Ui {
class searchinform2;
}

class searchinform2 : public QDialog
{
    Q_OBJECT

public:
    explicit searchinform2(QWidget *parent = nullptr);
    ~searchinform2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::searchinform2 *ui;
};

#endif // SEARCHINFORM2_H
