#include "counter.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Counter counter;
    counter.show();
    return a.exec();
}
