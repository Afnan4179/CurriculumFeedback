#include "searchforstudent.h"
#include "ui_searchforstudent.h"

searchforstudent::searchforstudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchforstudent)
{
    ui->setupUi(this);
}

searchforstudent::~searchforstudent()
{
    delete ui;
}
