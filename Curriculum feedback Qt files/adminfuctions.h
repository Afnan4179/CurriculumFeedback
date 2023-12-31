#ifndef ADMINFUCTIONS_H
#define ADMINFUCTIONS_H

#include <QDialog>
#include "viewfeedback.h"
#include "totalstudents.h"
#include "searchstudent.h"
#include "searchinform.h"

namespace Ui {
class AdminFuctions;
}

class AdminFuctions : public QDialog
{
    Q_OBJECT

public:
    explicit AdminFuctions(QWidget *parent = nullptr);
    ~AdminFuctions();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::AdminFuctions *ui;
    viewfeedback *ptrviewfeedback;
    totalstudents *ptrtotalstudents;
    searchstudent *ptrsearchstudent;
    Searchinform *ptrsearchinform;
};

#endif // ADMINFUCTIONS_H
