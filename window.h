#ifndef WINDOW_H
#define WINDOW_H

#include "counter.h"
#include <QWidget>
#include <QLabel>
#include <QPushButton>

class Window: public QWidget
{
    Q_OBJECT
private:
    QLabel *labelLeft;
    QLabel *labelRight;
    Counter *editLeft;
    Counter *editRight;
    QPushButton *calc;
    QPushButton *exit;
public:
    Window(QWidget *parent = nullptr);
};

#endif // WINDOW_H
