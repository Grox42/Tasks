#include "figure.h"
#include <QtMath>

Figure::Figure(int x, int y, int halfLength)
{
    this->x = x;
    this->y = y;
    this->halfLength = halfLength;
}

void Figure::move(qreal angle, QPainter *painter)
{
    dx = halfLength * qCos(angle);
    dy = halfLength * qSin(angle);
    draw(painter);
}
