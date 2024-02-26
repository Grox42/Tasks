#include "rect.h"

Rect::Rect(int x, int y, int halfLength): Figure(x, y, halfLength) {}

void Rect::draw(QPainter *painter)
{
    painter->drawLine(x + dx, y + dy, x + dy, y - dx);
    painter->drawLine(x + dy, y - dx, x - dx, y - dy);
    painter->drawLine(x - dx, y - dy, x - dy, y + dx);
    painter->drawLine(x - dy, y + dx, x + dx, y + dy);
}
