#pragma once
#include <iostream>
#include "../../Project-5/Project-5-Class/clsMyQueueArr.h"
using namespace std;

template <class T> 
class clsMyStackArr : public clsMyQueueArr <T>
{
public:

    void push(T Item)
    {
        clsMyQueueArr <T>::_MyArr.InsertAtBeginning(Item);
    }

    T Top()
    {
        return clsMyQueueArr <T>::front();
    }

    T Bottom()
    {
        return clsMyQueueArr <T>::back();
    }
};