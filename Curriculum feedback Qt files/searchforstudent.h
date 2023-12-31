#ifndef SEARCHFORSTUDENT_H
#define SEARCHFORSTUDENT_H

#include <QDialog>

namespace Ui {
class searchforstudent;
}

class searchforstudent : public QDialog
{
    Q_OBJECT

public:
    explicit searchforstudent(QWidget *parent = nullptr);
    ~searchforstudent();

private:
    Ui::searchforstudent *ui;
};

#endif // SEARCHFORSTUDENT_H
