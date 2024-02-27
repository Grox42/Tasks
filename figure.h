#ifndef FIGURE_H
#define FIGURE_H

#include <QPainter>

class Figure
{
protected:
    int x;
    int y;
    int dx;
    int dy;
    int halfLength;
    virtual void draw(QPainter *painter) = 0;
public:
    Figure(int x, int y, int halfLength);
    void move(qreal angle, QPainter *painter);
};

#endif // FIGURE_H
