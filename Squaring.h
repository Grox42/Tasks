#ifndef SQUARING_H
#define SQUARING_H

#include <QWidget>
#include <QFrame>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class Squaring: public QWidget
{
    Q_OBJECT
private:
    QTextCodec *codec;
    QFrame *frame;
    QLabel *inputLabel;
    QLineEdit *inputEdit;
    QLabel *outputLabel;
    QLineEdit *outputEdit;
    QPushButton *nextButton;
    QPushButton *exitButton;
public:
    Squaring(QWidget *parent = nullptr);
    ~Squaring();
public slots:
    void begin();
    void calc();
};

#endif // SQUARING_H
