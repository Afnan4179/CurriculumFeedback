#include "searchstudent.h"
#include "ui_searchstudent.h"
#include <QMessageBox>

searchstudent::searchstudent(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::searchstudent)
{
    ui->setupUi(this);
    ptrsearchstudent2= new searchstudent2();
}

searchstudent::~searchstudent()
{
    delete ui;
}

void searchstudent::on_pushButton_2_clicked()
{
    this->hide();
}


void searchstudent::on_pushButton_clicked()
{
    QString Name = ui-> lineEdit->text();
    if(Name=="Hira"){
        QMessageBox::information(this, "FeedBack Management System", "Student found.");
        this -> hide();
        ptrsearchstudent2->show();
    }
    else{
        QMessageBox::warning(this, "Feedback Management System", "Enter Valid Name");
    }
}

