#include "calcmodel.h"
#include <ctype.h>


CalcModel::CalcModel()
{
    _state=0;
    _currentValue=0;
    _operand1=0;

    _operator="";

}

void CalcModel::processUserInput(QString input)
{
    switch (_state) {
    case 0:
        if(input=="C"||input=="0")
        {
            _currentValue=0;
        }
        else if (input.toInt()<10 && input.toInt()>0)
        {
            _currentValue=input.toInt();
           _state=1;

        }
        else if (input=="+"||input=="-"||input=="*"||input=="/")
        {
            _operand1=_currentValue;
            _operator=input;
        }
        break;
    case 1:
        //S1 jobs
        if (input.toInt()<10 && input.toInt()>0)
        {
            _currentValue=input.toInt();
           _state=1;

        }
        else if (input=="+"||input=="-"||input=="*"||input=="/")
        {
            _operand1=_currentValue;
            _operator=input;
             _state=2;
        }

    }
}

QString CalcModel::getCurrentValue()
{
    return QString::number(_currentValue);
}
