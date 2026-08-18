#pragma once
#include <iostream>
#include "../../Project-4/Project-4-class/clsDynamicArray.h"

using namespace std;

template <class T> 
class clsMyQueueArr
{
protected:
    clsDynamicArray <T> _MyArr;
public:

    void push(T Value)
    {
        _MyArr.InsertAtEnd(Value);
    }

    void pop()
    {
        _MyArr.DeleteFirstItem();
    }

    void Print()
    {
        _MyArr.PrintList();
    }

    int Size()
    {
        return _MyArr.Size();
    }

    bool IsEmpty()
    {
        return _MyArr.IsEmpty();
    }
    
    T front()
    {
        return _MyArr.GetItem(0);
    }

    T back()
    {
        return _MyArr.GetItem(Size() - 1);
    }

    T GetItem(T Index)
    {
        return _MyArr.GetItem(Index);
    }

    void Reverse()
    {
        _MyArr.Reverse();
    }

    bool UpdateItem(int Index, T NewValue)
    {
        return _MyArr.SetItem(Index, NewValue);
    }

    void InsertAtFront(T Value)
    {
        _MyArr.InsertAtBeginning(Value);
    }

    void InsertAtBack(T Value)
    {
        _MyArr.InsertAtEnd(Value);
    }

    void Clear()
    {
        _MyArr.Clear();
    }

    bool InsertAfter(T Index, T NewValue)
    {
        return _MyArr.InsertAfter(Index, NewValue);
    }
    
};