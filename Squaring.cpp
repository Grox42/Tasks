#include "Squaring.h"
#include "StringValidator.h"
#include <QVBoxLayout>
#include <QMessageBox>

Squaring::Squaring(QWidget *parent): QWidget(parent)
{
    setWindowTitle("Squaring");

    frame = new QFrame(this);
    frame->setFrameShape(QFrame::Panel);
    frame->setFrameShadow(QFrame::Raised);

    inputLabel = new QLabel("Enter a number:", this);
    inputEdit = new QLineEdit(this);

    StringValidator *stringValidator = new StringValidator(inputEdit);
    inputEdit->setValidator(stringValidator);

    outputLabel = new QLabel("Result:", this);
    outputEdit = new QLineEdit("", this);

    nextButton = new QPushButton("Next", this);
    exitButton = new QPushButton("Exit", this);

    QVBoxLayout *LayoutLeft = new QVBoxLayout(frame);
    LayoutLeft->addWidget(inputLabel);
    LayoutLeft->addWidget(inputEdit);
    LayoutLeft->addWidget(outputLabel);
    LayoutLeft->addWidget(outputEdit);
    LayoutLeft->addStretch();

    QVBoxLayout *LayoutRight = new QVBoxLayout();
    LayoutRight->addWidget(nextButton);
    LayoutRight->addWidget(exitButton);
    LayoutRight->addStretch();

    QHBoxLayout *Layout = new QHBoxLayout(this);
    Layout->addWidget(frame);
    Layout->addLayout(LayoutRight);

    begin();

    connect(inputEdit, &QLineEdit::returnPressed, this, &calc);
    connect(nextButton, &QPushButton::clicked, this, &begin);
    connect(exitButton, &QPushButton::clicked, this, &close);
}

void Squaring::begin()
{
    inputEdit->clear();
    inputEdit->setEnabled(true);
    inputEdit->setFocus();

    outputLabel->setVisible(false);

    outputEdit->setVisible(false);
    outputEdit->setEnabled(false);

    nextButton->setEnabled(false);
    nextButton->setDefault(false);
}

void Squaring::calc()
{
    if (inputEdit->text().isEmpty()) {
        QMessageBox message(QMessageBox::Information, "Squaring", "The entered string is empty!", QMessageBox::Ok);
        message.exec();
        return;
    }

    QString str = inputEdit->text();
    bool ok;
    qreal number = str.toDouble(&ok);
    qreal result;

    if (ok) {
        result = number * number;
        str.setNum(result);

        inputEdit->setEnabled(false);

        outputLabel->setVisible(true);

        outputEdit->setVisible(true);
        outputEdit->setText(str);

        nextButton->setEnabled(true);
        nextButton->setDefault(true);
        nextButton->setFocus();
    } else {
        QMessageBox message(QMessageBox::Information, "Squaring", "The entered string is invalid!", QMessageBox::Ok);
        message.exec();
    }
}
