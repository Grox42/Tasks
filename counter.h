#ifndef COUNTER_H
#define COUNTER_H

#include <QLineEdit>

class Counter: public QLineEdit
{
    Q_OBJECT
signals:
    void tickSignal();
private slots:
    void addOne();
public:
    Counter(const QString &contents, QWidget *parent = nullptr);
    ~Counter();
};
#endif // COUNTER_H
