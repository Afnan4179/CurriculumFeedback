#ifndef TOTALSTUDENTS_H
#define TOTALSTUDENTS_H

#include <QDialog>

namespace Ui {
class totalstudents;
}

class totalstudents : public QDialog
{
    Q_OBJECT

public:
    explicit totalstudents(QWidget *parent = nullptr);
    ~totalstudents();

private slots:
    void on_pushButton_clicked();

private:
    Ui::totalstudents *ui;
};

#endif // TOTALSTUDENTS_H
