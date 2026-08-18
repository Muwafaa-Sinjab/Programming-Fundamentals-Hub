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

// Find a node by value
Node* Find(Node* Head, int Val)
{
    while (Head != NULL)
    {
        if (Head->Value == Val)
            return Head;

        Head = Head->Next;
    }

    return NULL;
}

// Insert a node after a node
void InsertAfter(Node* Prev_Node, int Val)
{
    if (Prev_Node == NULL)
    {
        cout << "The given previous node can't be NULL" << endl;
        return;
    }

    Node* new_Node = new Node();

    // Assign the value and connect the node
    new_Node->Value = Val;
    new_Node->Next = Prev_Node->Next;

    Prev_Node->Next = new_Node;
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

    InsertAtBeginning(Head, 1);
    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 4);
    InsertAtBeginning(Head, 5);

    PrintList(Head);

    Node* N1 = Find(Head, 4);

    InsertAfter(N1, 3);

    PrintList(Head);

    return 0;
}