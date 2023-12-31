#include "adminfuctions.h"
#include "ui_adminfuctions.h"

AdminFuctions::AdminFuctions(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminFuctions)
{
    ui->setupUi(this);
    ptrviewfeedback = new viewfeedback();
    ptrtotalstudents = new totalstudents();
    ptrsearchstudent = new searchstudent();
    ptrsearchinform = new Searchinform();
}

AdminFuctions::~AdminFuctions()
{
    delete ui;
    delete ptrviewfeedback;
    delete ptrtotalstudents;
    delete ptrsearchstudent;
    delete ptrsearchinform;
}

void AdminFuctions::on_pushButton_5_clicked()
{
    this->hide();
}


void AdminFuctions::on_pushButton_clicked()
{
    ptrviewfeedback ->show();
}


void AdminFuctions::on_pushButton_2_clicked()
{
    ptrtotalstudents->show();
}


void AdminFuctions::on_pushButton_3_clicked()
{
    ptrsearchstudent->show();
}


void AdminFuctions::on_pushButton_4_clicked()
{
    ptrsearchinform->show();
}

