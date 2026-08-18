#include <iostream>
using namespace std;

// Creating a node
class Node
{
public:
    int Value;
    Node* Next;
    Node* Prev;
};

// Insert a node at the beginning
void InsertAtBeginning(Node*& Head, int Val)
{
    /*
    1-Create a new node with the desired value.
    2-Set the next pointer of the new node to the current head of the list.
    3-Set the previous pointer of the current head to the new node.
    4-Set the new node as the new head of the list.
    */

    Node* new_Node = new Node();

    new_Node->Value = Val;
    new_Node->Next = Head;
    new_Node->Prev = NULL;

    if (Head != NULL)
    {
        Head->Prev = new_Node;
    }

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

// Print the linked list
void PrintList(Node* Head)
{
    cout << "NULL <--> ";

    while (Head != NULL)
    {
        cout << Head->Value << " <--> ";
        Head = Head->Next;
    }

    cout << "NULL";
}

int main()
{
    Node* Head = NULL;

    InsertAtBeginning(Head, 5);
    InsertAtBeginning(Head, 4);
    InsertAtBeginning(Head, 3);
    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 1);

    cout << "\nLinked List Content:\n";
    PrintList(Head);

    Node* N1 = Find(Head, 2);

    if (N1 != NULL)
        cout << "\nNode Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";

    return 0;
}