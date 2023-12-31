#include "viewfeedback.h"
#include "ui_viewfeedback.h"


viewfeedback::viewfeedback(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::viewfeedback)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/PC/Desktop/ooppicsfeedbacksystem/viewfeedback.PNG");
    ui->label_pic->setPixmap(pix);


}

viewfeedback::~viewfeedback()
{
    delete ui;
}

void viewfeedback::on_pushButton_clicked()
{
    this->hide();
}

