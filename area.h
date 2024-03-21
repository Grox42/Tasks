#ifndef AREA_H
#define AREA_H

#include "line.h"
#include "rect.h"
#include <QWidget>

class Area : public QWidget
{
    Q_OBJECT
private:
    qint32 time;
    qreal angle;
    Line *line;
    Rect *rect;

    virtual void paintEvent(QPaintEvent *event);
    virtual void timerEvent(QTimerEvent *event);
    virtual void showEvent(QShowEvent *event);
    virtual void hideEvent(QHideEvent *event);
public:
    Area(QWidget *parent = nullptr);
};

#endif // AREA_H
