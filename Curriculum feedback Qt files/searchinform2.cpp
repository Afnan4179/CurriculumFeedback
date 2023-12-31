#include "searchinform2.h"
#include "ui_searchinform2.h"

searchinform2::searchinform2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::searchinform2)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/PC/Desktop/ooppicsfeedbacksystem/viewfeedback.PNG");
    ui->label_pic->setPixmap(pix);
}

searchinform2::~searchinform2()
{
    delete ui;
}

void searchinform2::on_pushButton_clicked()
{
    this->hide();
}

