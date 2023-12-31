#ifndef FEEDBACKSYSTEM_H
#define FEEDBACKSYSTEM_H

#include <QMainWindow>
#include "signin.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Feedbacksystem;
}
QT_END_NAMESPACE

class Feedbacksystem : public QMainWindow
{
    Q_OBJECT

public:
    Feedbacksystem(QWidget *parent = nullptr);
    ~Feedbacksystem();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Feedbacksystem *ui;
    signin *ptrsignin;
};
#endif // FEEDBACKSYSTEM_H
