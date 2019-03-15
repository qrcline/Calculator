#include "calcmodel.h"
#include <ctype.h>
#include <iostream>


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
        else if ((input.toInt()<10 && input.toInt()>0)||input==0)
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
        std::cout<<"Case 0"<<std::endl;
        break;
    case 1:
         std::cout<<"Case 1 input to int: "<<input.toInt()<<std::endl;
        //S1 jobs
        if(input=="C")
        {
            _currentValue=0;
            _state=0;
             std::cout<<"Case 1.1"<<std::endl;
        }
        else if ((input.toInt()<10 && input.toInt()>0)||input==0)
        {
            _currentValue=_currentValue*10;
            _currentValue+=input.toInt();
             std::cout<<"Case 1.2"<<std::endl;

        }
        else if (input=="+"||input=="-"||input=="*"||input=="/")
        {
            _operand1=_currentValue;
            _operator=input;
             _state=2;
              std::cout<<"Case 1.3"<<std::endl;
        }
        //std::cout<<"Case 1"<<std::endl;
        break;
    case 2:
        if(input=="C")
        {
            _currentValue=0;
              _state=0;
        }
        else if ((input.toInt()<10 && input.toInt()>0)||input==0)
        {    
            _currentValue=input.toInt();

           _state=3;

        }
        else if (input=="+"||input=="-"||input=="*"||input=="/")
        {
             _operator=input;
        }
        std::cout<<"Case 2"<<std::endl;
       break;

    case 3:
        if(input=="C")
        {
            _currentValue=0;
            _state=0;
        }
        else if ((input.toInt()<10 && input.toInt()>0)||input==0)
        {
            _currentValue=_currentValue*10;
            _currentValue+=input.toInt();

        }
        else if (input=="+"||input=="-"||input=="*"||input=="/")
        {
            _operator=input;
            _state=2;
        }

        else if(input=="=")
        {
            _currentValue= calculator(_operand1,_currentValue,_operator);
            _state=0;
        }
       std::cout<<"Case 3"<<std::endl;
    };
}

QString CalcModel::getCurrentValue()
{
    return QString::number(_currentValue);
}

int CalcModel::calculator(int x, int y, QString inputOp)
{
    switch(inputOp.toStdString()[0])
        {
            case '+':
                return x + y;
            case '-':
                return x - y;
            case '*':
                return x * y;
            case '/':
                return x / y;
            default:
                return 0;
        }
}
