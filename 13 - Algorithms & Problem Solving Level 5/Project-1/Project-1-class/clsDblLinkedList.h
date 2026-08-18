#pragma once
#include <iostream>
using namespace std;

template <class T> 
class clsDblLinkedList
{
protected:
    int _Size = 0;

public:
    class Node
    {
    public:
        T Value;
        Node* Next;
        Node* Prev;
    };

    Node* Head = NULL;

    // Print the linked list
    void PrintList()
    {
        cout << "\n";
        Node* Current = Head;
        
        while (Current != NULL)
        {
            cout << Current->Value << " ";
            Current = Current->Next;
        }   
    }

    // Find a node by value
    Node* Find(T Val)
    {
        Node* Current = Head;
        while (Current != NULL)
        {
            if (Current->Value == Val)
                return Current;

            Current = Current->Next;
        }

        return NULL;
    }

    // Get the number of nodes in the list
    int Size()
    {
        return _Size;
    }

    // Get if the list is empty
    bool IsEmpty()
    {
        return(_Size == 0 ? true : false);
    }

    // Insert a node At The Beginning
    void InsertAtBeginning(T Val)
    {
        /*
        1-Create a new node with the desired value.
        2-Set the next pointer of the new node to the current head of the list.
        3-Set the previous pointer of the current head to the new node.
        4-Set the new node as the new head of the list.
        */

        Node* NewNode = new Node();

        NewNode->Value = Val;
        NewNode->Next = Head;
        NewNode->Prev = NULL;

        if (Head != NULL)
        {
            Head->Prev = NewNode;
        }

        Head = NewNode;

        _Size++;
    }

    // Insert at the end
    void InsertAtEnd(T Val)
    {
        /*
        1-Create a new node with the desired value.
        2-Traverse the list to find the last node.
        3-Set the next pointer of the last node to the new node.
        4-Set the previous pointer of the new node to the last node.
        */

        Node* NewNode = new Node();

        NewNode->Value = Val;
        NewNode->Next = NULL;

        if(Head == NULL)
        {
            Head = NewNode;
            NewNode->Prev = NULL;
            _Size++;
            return;
        }

        Node* LastNode = Head;

        while(LastNode->Next != NULL)
        {
            LastNode = LastNode->Next;
        }

        LastNode->Next = NewNode;
        NewNode->Prev = LastNode;

        _Size++;
    }

    // Insert a node after a node
    void InsertAfter(Node* PrevNode, T Val)
    {
        /*
        1-Create a new node with the desired value.
        2-Set the next pointer of the new node to the next node of the current node.
        3-Set the previous pointer of the new node to the current node.
        4-Set the next pointer of the current node to the new node.
        5-Set the previous pointer of the next node to the new node(if it exists).
        */

        if(PrevNode == NULL) return;

        Node* NewNode = new Node();

        NewNode->Value = Val;
        NewNode->Next = PrevNode->Next;
        NewNode->Prev = PrevNode;

        if(PrevNode->Next != NULL)
        {
            PrevNode->Next->Prev = NewNode;
        }

        PrevNode->Next = NewNode;

         _Size++;
    }

    // Delete a node
    void DeleteNode(Node* NodeToDelete)
    {
        /*
        1-Set the next pointer of the previous node to the next pointer of the current node.
        2-Set the previous pointer of the next node to the previous pointer of the current node.
        3-Delete the current node.
        */

        if(Head == NULL || NodeToDelete == NULL)
            return;

        if(Head == NodeToDelete)
            Head = NodeToDelete->Next;

        if(NodeToDelete->Next != NULL)
            NodeToDelete->Next->Prev = NodeToDelete->Prev;

        if(NodeToDelete->Prev != NULL)
            NodeToDelete->Prev->Next = NodeToDelete->Next;

        delete NodeToDelete;

        _Size--;
    }

    // Delete First node
    void DeleteFirstNode()
    {
        /*
        1-Store a reference to the head node in a temporary variable.
        2-Update the head pointer to point to the next node in the list.
        3-Set the previous pointer of the new head to NULL.
        4-Delete the temporary reference to the old head node.
        */

        if(Head == NULL)
            return;

        Node* Temp = Head;
        Head = Head->Next;

        if(Head != NULL)
            Head->Prev = NULL;

        delete Temp;
        _Size--;
    }

    // Delete Last node
    void DeleteLastNode()
    {
        /*
        1- Check if the list is empty.
        2- Traverse the list to find the last node.
        3- Set the next pointer of the previous node to NULL.
        4- Delete the last node.
        */

        if(Head == NULL)
            return;

        Node* LastNode = Head;

        if(LastNode->Next == NULL)
        {
            Head = NULL;
            delete LastNode;
            return;
        }

        while(LastNode->Next != NULL)
        {
            LastNode = LastNode->Next;
        }

        LastNode->Prev->Next = NULL;
        delete LastNode;

        _Size--;
    }

    //Removes all nodes from the list.
    void Clear()
    {
        while (_Size > 0)
        {
            DeleteFirstNode();
        }
    }

    //Reverse the list.
    void Reverse()
    {
        Node* Current = Head;
        Node* Temp = NULL;

        while (Current != NULL) {
            Temp = Current->Prev;
            Current->Prev = Current->Next;
            Current->Next = Temp;
            Current = Current->Prev;
        }

        if (Temp != NULL) {
            Head = Temp->Prev;
        }
    }

    Node* GetNode(T IndexNumber)
    {   
        if(Head == NULL) return 0;
        if((IndexNumber > _Size - 1) || (IndexNumber < 0)) return NULL;

        Node* Current = Head;
        int Counter = 0;

        while (Current != NULL && (Current->Next != NULL))
        {   
            if(Counter == IndexNumber)
            {
                break; 
            }
            Current = Current->Next;
            Counter++;
        }
        return Current;
    }

    T GetItem(T Index)
    {
        Node* ItemNode = GetNode(Index);

        if(ItemNode == NULL) 
            return 0;
        else
            return ItemNode->Value;
    }

    bool UpdateItem(T Index, T NewValue)
    {
        Node* ItemNode = GetNode(Index);
        if(ItemNode != NULL) 
        {
            ItemNode->Value = NewValue;
            return true;
        }
        else
            return false;   
    }

    bool InsertAfter(T Index, T NewValue)
    {
        Node* ItemNode = GetNode(Index);
        if(ItemNode != NULL)
        {
            InsertAfter(ItemNode, NewValue);
            return true;
        }
        else
            return false;
    }
};