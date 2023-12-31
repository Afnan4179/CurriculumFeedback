#ifndef SEARCHSTUDENT2_H
#define SEARCHSTUDENT2_H

#include <QDialog>

namespace Ui {
class searchstudent2;
}

class searchstudent2 : public QDialog
{
    Q_OBJECT

public:
    explicit searchstudent2(QWidget *parent = nullptr);
    ~searchstudent2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::searchstudent2 *ui;
};

#endif // SEARCHSTUDENT2_H
