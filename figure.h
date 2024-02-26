#ifndef FIGURE_H
#define FIGURE_H

#include <QPainter>

class Figure
{
protected:
    int x, y, dx, dy, halfLength;
    virtual void draw(QPainter *painter);
public:
    Figure(int x, int y, int halfLength);
    void move(float angle, QPainter painter);
};

#endif // FIGURE_H
