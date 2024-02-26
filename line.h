#ifndef LINE_H
#define LINE_H

#include "figure.h"

class Line: public Figure
{
protected:
    virtual void draw(QPainter *painter);
public:
    Line(int x, int y, int halfLength);
};

#endif // LINE_H
