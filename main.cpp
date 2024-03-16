#include "window.h"

#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[]) try
{
    QApplication a(argc, argv);
    Window window;
    window.show();
    return a.exec();
} catch(std::bad_alloc &exc) {
    qDebug() << exc.what();
    return 1;
}
