#ifndef RECT_H
#define RECT_H

#include "figure.h"

class Rect: public Figure
{
protected:
    virtual void draw(QPainter *painter);
public:
    Rect(int x, int y, int halfLength);
};

#endif // RECT_H
