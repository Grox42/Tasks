#ifndef STRINGVALIDATOR_H
#define STRINGVALIDATOR_H

#include <QValidator>
#include <QObject>

class StringValidator: public QValidator
{
public:
    StringValidator(QObject *parent): QValidator(parent);
    virtual State validate(QString &, int &) const;
};

#endif // STRINGVALIDATOR_H
