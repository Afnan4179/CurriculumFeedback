#include "searchstudent2.h"
#include "ui_searchstudent2.h"

searchstudent2::searchstudent2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::searchstudent2)
{
    ui->setupUi(this);
}

searchstudent2::~searchstudent2()
{
    delete ui;
}

void searchstudent2::on_pushButton_clicked()
{
    this->hide();
}

