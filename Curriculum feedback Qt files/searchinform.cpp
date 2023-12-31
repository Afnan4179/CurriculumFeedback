#include "searchinform.h"
#include "ui_searchinform.h"

Searchinform::Searchinform(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Searchinform)
{
    ui->setupUi(this);
    ptrsearchinform2 = new searchinform2();
}

Searchinform::~Searchinform()
{
    delete ui;
}

void Searchinform::on_pushButton_clicked()
{
    this->hide();
}


void Searchinform::on_pushButton_2_clicked()
{
    ptrsearchinform2->show();
}

