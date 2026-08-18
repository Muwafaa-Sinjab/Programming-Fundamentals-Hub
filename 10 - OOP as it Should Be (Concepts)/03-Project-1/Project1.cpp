#include <iostream>
using namespace std;

class clsCalculator
{
private:
    float _LastNumber = 0;
    float _Reasult = 0;
    float _PreviousResult = 0;
    string _LastOpration = "Clear";
    
    bool _IsZero(float Input)
    {
        return (Input == 0);
    }

public:
    void Add(float Input)
    {
        _LastNumber = Input;
        _PreviousResult = _Reasult;
        _LastOpration = "Adding";
        _Reasult += Input;
    } 

    void Multiply(float Input)
    {
        _LastNumber = Input;
        _PreviousResult = _Reasult;
        _LastOpration = "Multipling";
        _Reasult *= Input;
    }

    void Divide(float Input)
    {
        _LastNumber = Input;

        if(_IsZero(Input))
        {
            Input = 1;
        }

        _PreviousResult = _Reasult;
        _LastOpration = "Dividing";
        _Reasult /= Input;
    }

    void Subtract(float Input)
    {
        _LastNumber = Input;
        _PreviousResult = _Reasult;
        _LastOpration = "Subtracting";
        _Reasult -= Input;
    }

    void Clear()
    {
        _Reasult = 0;
        _LastNumber = 0;
        _PreviousResult = 0;
        _LastOpration = "clear";
    }

    float GetFinialResult()
    {
        return _Reasult;
    }

    void PrintResult()
    {
        cout << "Result After " << _LastOpration <<  " " << _LastNumber << " is: " << _Reasult << endl;
    }
};

int main()
{
    clsCalculator Calculator;

    cout << "--- Start Calculator ---" << endl << endl;

    Calculator.Clear();
    
    Calculator.Add(10);
    Calculator.PrintResult();
    
    Calculator.Add(100);
    Calculator.PrintResult();
    
    Calculator.Subtract(20);
    Calculator.PrintResult();

    Calculator.Multiply(2);
    Calculator.PrintResult();

    Calculator.Divide(0);
    Calculator.PrintResult();

    cout << endl << "--- Done ---" << endl;
    return 0;
}