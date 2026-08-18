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

// Delete the last node
void DeleteLastNode(Node*& Head)
{
    Node* Current = Head;
    Node* Prev = Head;

    if (Head == NULL)
        return;

    if (Current->Next == NULL)
    {
        Head = NULL;
        delete Current;
        return;
    }

    // Find the last node
    while (Current != NULL && Current->Next != NULL)
    {
        Prev = Current;
        Current = Current->Next;
    }

    // Remove the last node
    Prev->Next = NULL;
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

    DeleteLastNode(Head);

    PrintList(Head);

    return 0;
}