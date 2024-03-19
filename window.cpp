#include "window.h"
#include <QHBoxLayout>
#include <QMessageBox>
#include <QDebug>

Window::Window(QWidget *parent): QWidget{parent}
{
    setWindowTitle("Counter");

    labelLeft = new QLabel("Counter by 1", this);
    labelRight = new QLabel("Counter by 5", this);

    editLeft = new Counter("0", this);
    editRight = new Counter("0", this);

    calc = new QPushButton("+1", this);

    exit = new QPushButton("Exit", this);

    QHBoxLayout *layoutTop = new QHBoxLayout();

    QHBoxLayout *layoutMid = new QHBoxLayout();

    QHBoxLayout *layoutLow = new QHBoxLayout();

    QVBoxLayout *layoutMain = new QVBoxLayout(this);

    if (!(labelLeft && labelRight && editLeft && editRight && calc && exit && layoutTop && layoutMid && layoutLow)) {
        qDebug() << "Error: memory allocation";
        if (layoutTop)
            delete layoutTop;
        if (layoutMid)
            delete layoutMid;
        if (layoutLow)
            delete layoutLow;
        return;
    }

    calc->setDefault(true);

    layoutTop->addWidget(labelLeft);
    layoutTop->addWidget(labelRight);

    layoutMid->addWidget(editLeft);
    layoutMid->addWidget(editRight);

    layoutLow->addWidget(calc);
    layoutLow->addWidget(exit);

    layoutMain->addLayout(layoutTop);
    layoutMain->addLayout(layoutMid);
    layoutMain->addLayout(layoutLow);
    layoutMain->addStretch();

    connect(calc, &QPushButton::clicked, editLeft, &Counter::addOne);
    connect(editLeft, &Counter::tickSignal, editRight, &Counter::addOne);
    connect(exit, &QPushButton::clicked, this, &close);
}
