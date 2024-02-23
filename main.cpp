#include "squaring.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Squaring w;
    w.show();
    return a.exec();
}
