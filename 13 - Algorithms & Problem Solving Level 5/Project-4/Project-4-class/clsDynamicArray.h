#pragma once
#include <iostream>
using namespace std;

template <class T> 
class clsDynamicArray
{
private:
    int _ArrayLenght;
    T* _TempArray;

public:
    T* ptrArray;

    clsDynamicArray(int ArrayLenght = 0)
    {
        if(ArrayLenght < 0) ArrayLenght = 0;

        _ArrayLenght = ArrayLenght;
        ptrArray = new T[_ArrayLenght];
    }

    ~clsDynamicArray()
    {
        delete[] ptrArray;
    }

    bool SetItem(int index, T Value)
    {
        if (index >= _ArrayLenght) return false;

        ptrArray[index] = Value;
        return true;
    }

    bool IsEmpty()
    {
        return _ArrayLenght == 0;
    }

    int Size()
    {
        return _ArrayLenght;
    }

    void PrintList()
    {
        for(int i = 0; i < _ArrayLenght; i++)
        {
            cout << ptrArray[i] << " ";
        }

        cout << "\n";
    }

    void Resize(int NewArrayLenght)
    {
        if(NewArrayLenght < 0) NewArrayLenght = 0;

        _TempArray = new T[NewArrayLenght];

        if(NewArrayLenght < _ArrayLenght) _ArrayLenght = NewArrayLenght;

        for (int Index = 0; Index < _ArrayLenght; Index++)
        {
            _TempArray[Index] = ptrArray[Index];
        }
        _ArrayLenght = NewArrayLenght;
        delete[] ptrArray;
        ptrArray = _TempArray;
    }

    T GetItem(int ItemIndex)
    {
        if(ItemIndex > (_ArrayLenght - 1) || ItemIndex < 0) ItemIndex = 0;
        return ptrArray[ItemIndex];
    }

    void Reverse()
    {
        _TempArray = new T[_ArrayLenght];

        for(int i = 0; i < _ArrayLenght; i++)
        {
            _TempArray[i] = ptrArray[(_ArrayLenght - 1) - i];
        }
        delete[] ptrArray;
        ptrArray = _TempArray;
    }

    void Clear()
    {
        _ArrayLenght = 0;
        _TempArray = new T[0];
        delete[] ptrArray;
        ptrArray = _TempArray;
    }

    bool DeleteItemAt(int ItemIndex)
    {
        if(ItemIndex > (_ArrayLenght - 1) || ItemIndex < 0) return false;

        _ArrayLenght--;
        _TempArray = new T[_ArrayLenght];

        //copy all before index
        for(int i = 0; i < ItemIndex; i++)
        {
            _TempArray[i] = ptrArray[i];
        }

        //copy all after index
        for(int i = ItemIndex; i < _ArrayLenght; i++)
        {
            _TempArray[i] = ptrArray[i + 1];
        }
        delete[] ptrArray;
        ptrArray = _TempArray;
        return true;
    }

    bool DeleteFirstItem()
    {
        return DeleteItemAt(0);
    }

    bool DeleteLastItem()
    {
        return DeleteItemAt(_ArrayLenght - 1);
    }

    int Find(T ItemToSearch)
    {
        for(int i = 0; i < _ArrayLenght; i++)
        {
            if(GetItem(i) == ItemToSearch)
                return i;
        }
        return -1;
    }

    bool DeleteItem(T ItemToSearch)
    {
        int Index = Find(ItemToSearch);
        if(Index == -1) return false;
        return DeleteItemAt(Index);
    }

    bool InsertAt(int Index, T Value)
    {
        if (Index > _ArrayLenght || Index < 0) return false;
        _ArrayLenght++;

        _TempArray = new T[_ArrayLenght];

        //copy all before index
        for(int i = 0; i < Index; i++)
        {
            _TempArray[i] = ptrArray[i];
        }

        _TempArray[Index] = Value;

        for(int i = Index + 1; i < _ArrayLenght; i++)
        {
            _TempArray[i] = ptrArray[i - 1];
        }

        delete[] ptrArray;
        ptrArray = _TempArray;
        return true;
    }

    bool InsertAtBeginning(T Value)
    {
        return InsertAt(0, Value);
    }

    bool InsertBefore(int Index, T Value)
    {   
        if(Index < 1)
            return InsertAt(0, Value);
        else 
            return InsertAt(Index , Value);
    }

    bool InsertAfter(int Index, T Value)
    {
        if(Index > _ArrayLenght)
            return InsertAt(_ArrayLenght - 1, Value);
        else
            return InsertAt(Index + 1, Value);
    }

    bool InsertAtEnd(T Value)
    {
        return InsertAt(_ArrayLenght, Value);
    }
};