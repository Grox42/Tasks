#ifndef STRINGVALIDATOR_H
#define STRINGVALIDATOR_H

#include <QValidator>
#include <QObject>

class StringValidator: public QValidator
{
public:
    StringValidator(QObject *parent);
    virtual State validate(QString &input, int &pos) const;
};

#endif // STRINGVALIDATOR_H
