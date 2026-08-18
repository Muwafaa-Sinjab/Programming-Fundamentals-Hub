#pragma once
#include <iostream>
#include <stack>
using namespace std;

template <class T> 
class clsMyString
{
private:
    string _Value;
    stack <string> _Undo;
    stack <string> _Redo;
public:

    void Set(string Value)
    {
        _Undo.push(_Value);
        _Value = Value;
    }

    string Get()
    {
        return _Value;
    } 

    void Undo()
    {
        if(!_Undo.empty())
        {
            _Redo.push(_Value);
            _Value = _Undo.top();
            _Undo.pop();
        }
    }

    void Redo()
    {
        if(!_Redo.empty())
        {
            _Undo.push(_Value);
            _Value = _Redo.top();
            _Redo.pop();
        }
    }
};