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
    QLabel *labelLeft, *labelRight;
    Counter *editLeft, *editRight;
    QPushButton *calc;
    QPushButton *exit;
public:
    Window(QWidget *parent = nullptr);
    ~Window();
signals:

};

#endif // WINDOW_H
