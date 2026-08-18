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

// Delete the first node
void DeleteFirstNode(Node*& Head)
{
    if (Head == NULL)
        return;

    Node* FirstNode = Head;

    Head = FirstNode->Next;
    delete FirstNode;
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

    DeleteFirstNode(Head);

    PrintList(Head);

    return 0;
}