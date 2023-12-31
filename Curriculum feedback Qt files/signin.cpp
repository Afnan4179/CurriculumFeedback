#include "signin.h"
#include "ui_signin.h"
#include <QMessageBox>

signin::signin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signin)
{
    ui->setupUi(this);
    ptradminfuctions = new AdminFuctions();

}

signin::~signin()
{
    delete ui;
}

void signin::on_pushButton_clicked()
{
    QString UserName = ui-> lineEdit->text();
    QString Password = ui-> lineEdit_2->text();
    if(UserName == "Admin" && Password == "Afnan1234"){
        QMessageBox::information(this, "FeedBack Management System", "You have successfully logged in as Admin.");
        this -> hide();
        ptradminfuctions -> show();

 }
    else{
        QMessageBox::warning(this, "Feedback Management System", "Enter Valid Email or Password");
    }
}

void signin::on_pushButton_2_clicked()
{
    this ->hide();
}

