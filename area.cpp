#include "area.h"
#include <QTimerEvent>

Area::Area(QWidget *parent): QWidget(parent)
{
    setFixedSize(QSize(300, 200));

    line = new Line(80, 100, 50);
    rect = new Rect(220, 100, 50);
    angle = 0;
}

Area::~Area()
{
    delete line;
    delete rect;
}

void Area::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);
    painter->setPen(Qt::red);
    line->move(angle, painter);
    rect->move(angle * -0.5, painter);
}

void Area::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == time) {
        angle += 0.2;
        update();
    } else
        QWidget::timerEvent(event);
}

void Area::showEvent(QShowEvent *event)
{
    time = startTimer(50);
}

void Area::hideEvent(QHideEvent *event)
{
    killTimer(time);
}
