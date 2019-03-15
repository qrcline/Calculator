#ifndef CALCMODEL_H
#define CALCMODEL_H

#include <QWidget>
#include <QString>

class CalcModel
{
public:
    CalcModel();
    void processUserInput(QString in);
    QString getCurrentValue();

private:
    int _state;
    int _currentValue;
    int _outputValue;
    int _operand1;

    QString _operator;
    QString _display;
    int calculator(int value1, int value2, QString inputOp);
};

#endif // CALCMODEL_H
