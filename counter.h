#ifndef COUNTER_H
#define COUNTER_H

#include <QLineEdit>

class Counter: public QLineEdit
{
    Q_OBJECT
signals:
    void tickSignal();
public slots:
    void addOne();
public:
    Counter(const QString &contents, QWidget *parent = nullptr);
};
#endif // COUNTER_H
