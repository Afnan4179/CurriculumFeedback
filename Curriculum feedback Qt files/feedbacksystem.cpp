#include "feedbacksystem.h"
#include "./ui_feedbacksystem.h"
#include <QPixmap>

Feedbacksystem::Feedbacksystem(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Feedbacksystem)
{
    ui->setupUi(this);
    ptrsignin = new signin();
}

Feedbacksystem::~Feedbacksystem()
{
    delete ui;
    delete ptrsignin;
}

void Feedbacksystem::on_pushButton_clicked()
{
    ptrsignin->show();
}

