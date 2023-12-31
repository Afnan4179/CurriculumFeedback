#include "feedbacksystem.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Feedbacksystem w;
    w.show();
    return a.exec();
}
