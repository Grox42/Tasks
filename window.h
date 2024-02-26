#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>

class Window: public QWidget
{
    Q_OBJECT
private:
    QPushButton *button;
public:
    Window(QWidget *parent = nullptr);
    ~Window();
};

#endif // WINDOW_H
