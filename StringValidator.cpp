#include "StringValidator.h"

StringValidator::StringValidator(QObject *parent): QValidator(parent) {}

QValidator::State StringValidator::validate(QString &input, int &pos) const
{
    return Acceptable;
}
