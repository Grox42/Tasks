#include "window.h"
#include <QHBoxLayout>

Window::Window(QWidget *parent): QWidget{parent}
{
    setWindowTitle("Counter");

    labelLeft = new QLabel("Counter by 1", this);
    labelRight = new QLabel("Counter by 5", this);

    editLeft = new Counter("0", this);
    editRight = new Counter("0", this);

    calc = new QPushButton("+1", this);
    calc->setDefault(true);

    exit = new QPushButton("Exit", this);

    QHBoxLayout *layoutTop = new QHBoxLayout();
    layoutTop->addWidget(labelLeft);
    layoutTop->addWidget(labelRight);

    QHBoxLayout *layoutMid = new QHBoxLayout();
    layoutMid->addWidget(editLeft);
    layoutMid->addWidget(editRight);

    QHBoxLayout *layoutLow = new QHBoxLayout();
    layoutLow->addWidget(calc);
    layoutLow->addWidget(exit);

    QVBoxLayout *layoutMain = new QVBoxLayout(this);
    layoutMain->addLayout(layoutTop);
    layoutMain->addLayout(layoutMid);
    layoutMain->addLayout(layoutLow);

    connect(calc, &QPushButton::clicked, editLeft, &Counter::addOne);
    connect(editLeft, &Counter::tickSignal, editRight, &Counter::addOne);
    connect(exit, &QPushButton::clicked, this, close);
}
