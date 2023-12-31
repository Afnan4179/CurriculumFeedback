#include "totalstudents.h"
#include "ui_totalstudents.h"

totalstudents::totalstudents(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::totalstudents)
{
    ui->setupUi(this);
}

totalstudents::~totalstudents()
{
    delete ui;
}

void totalstudents::on_pushButton_clicked()
{
    this->hide();
}

