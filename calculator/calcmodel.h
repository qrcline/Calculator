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
    float _currentValue;
    float _outputValue;
    float _operand1;

    QString _operator;
    QString _display;
    float calculator(float value1, float value2, QString inputOp);
};

#endif // CALCMODEL_H
