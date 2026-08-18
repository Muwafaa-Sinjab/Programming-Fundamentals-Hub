#include <iostream>
using namespace std;

// Creating a node
class Node
{
public:
    int Value;
    Node* Next;
};

// Insert a node at the end
void InsertAtEnd(Node*& Head, int Val)
{
    Node* new_Node = new Node();

    // Assign the value and connect the node
    new_Node->Value = Val;
    new_Node->Next = NULL;

    if (Head == NULL)
    {
        Head = new_Node;
        return;
    }

    Node* LastNode = Head;

    while (LastNode->Next != NULL)
    {
        LastNode = LastNode->Next;
    }

    LastNode->Next = new_Node;
}

// Delete a node
void DeleteNode(Node*& Head, int Val)
{
    Node* Current = Head;
    Node* Prev = Head;

    if (Head == NULL)
        return;

    if (Current->Value == Val)
    {
        Head = Current->Next;
        delete Current;
        return;
    }

    // Find the node to be deleted
    while (Current != NULL && Current->Value != Val)
    {
        Prev = Current;
        Current = Current->Next;
    }

    // If the value is not present
    if (Current == NULL)
        return;

    // Remove the node
    Prev->Next = Current->Next;
    delete Current;
}

// Print the linked list
void PrintList(Node* Head)
{
    cout << "\n";

    while (Head != NULL)
    {
        cout << Head->Value << " ";
        Head = Head->Next;
    }
}

int main()
{
    Node* Head = NULL;

    InsertAtEnd(Head, 1);
    InsertAtEnd(Head, 2);
    InsertAtEnd(Head, 3);
    InsertAtEnd(Head, 4);
    InsertAtEnd(Head, 5);
    InsertAtEnd(Head, 6);

    PrintList(Head);

    DeleteNode(Head, 5);

    PrintList(Head);

    return 0;
}