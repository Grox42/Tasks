#include "counter.h"

Counter::Counter(const QString &contents, QWidget *parent): QLineEdit(contents, parent)
{
    setEnabled(false);
}

void Counter::addOne()
{
    QString str = text();
    qint32 number = str.toInt();
    number++;
    if (number % 5 == 0)
        emit tickSignal();
    str.setNum(number);
    setText(str);
}

