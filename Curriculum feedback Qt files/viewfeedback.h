#ifndef VIEWFEEDBACK_H
#define VIEWFEEDBACK_H

#include <QDialog>
#include <QPixmap>

namespace Ui {
class viewfeedback;
}

class viewfeedback : public QDialog
{
    Q_OBJECT

public:
    explicit viewfeedback(QWidget *parent = nullptr);
    ~viewfeedback();

private slots:
    void on_pushButton_clicked();

private:
    Ui::viewfeedback *ui;
};

#endif // VIEWFEEDBACK_H
