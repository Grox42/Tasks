#ifndef WINDOW_H
#define WINDOW_H

#include "area.h"
#include <QWidget>
#include <QPushButton>

class Window: public QWidget
{
    Q_OBJECT
private:
    Area *area;
    QPushButton *button;
public:
    Window(QWidget *parent = nullptr);
    ~Window();
};

#endif // WINDOW_H
