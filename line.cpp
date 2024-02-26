#include "line.h"

Line::Line(int x, int y, int halfLength): Figure(x, y, halfLength) {}

void Line::draw(QPainter *painter)
{
    painter->drawLine(x + dx, y + dy, x - dx, y - dy);
}
