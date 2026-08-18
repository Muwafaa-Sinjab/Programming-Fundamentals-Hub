#include <iostream>
using namespace std;

// Creating a node
class Node
{
public:
    int Value;
    Node* Next;
};

// Insert a node at the beginning
void InsertAtBeginning(Node*& Head, int Val)
{
    // Allocate memory to a node
    Node* new_Node = new Node();

    // Assign the value and connect the node
    new_Node->Value = Val;
    new_Node->Next = Head;

    // Move Head to the new node
    Head = new_Node;
}

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

    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 3);
    InsertAtBeginning(Head, 4);
    InsertAtBeginning(Head, 5);

    PrintList(Head);

    InsertAtEnd(Head, 1);

    PrintList(Head);

    return 0;
}