#include "window.h"
#include <QVBoxLayout>

Window::Window(QWidget *parent): QWidget(parent)
{
    setWindowTitle("Rotation");

    area = new Area(this);

    button = new QPushButton("Exit", this);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(area);
    layout->addWidget(button);

    connect(button, &QPushButton::clicked, this, &QWidget::close);
}

Window::~Window()
{
    delete area;
    delete button;
}
