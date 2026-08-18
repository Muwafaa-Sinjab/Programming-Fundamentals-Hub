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

// Insert at the beginning
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

    if(Head != NULL)
    {
        Head->Prev = new_Node;
    }

    Head = new_Node;
}

// Insert at the end
void InsertAtEnd(Node*& Head, int Val)
{
    /*
    1-Create a new node with the desired value.
    2-Traverse the list to find the last node.
    3-Set the next pointer of the last node to the new node.
    4-Set the previous pointer of the new node to the last node.
    */

    Node* new_Node = new Node();

    new_Node->Value = Val;
    new_Node->Next = NULL;

    if(Head == NULL)
    {
        Head = new_Node;
        new_Node->Prev = NULL;
        return;
    }

    Node* LastNode = Head;

    while(LastNode->Next != NULL)
    {
        LastNode = LastNode->Next;
    }

    LastNode->Next = new_Node;
    new_Node->Prev = LastNode;
}

// Print the linked list
void PrintList(Node* Head)
{
    cout << "NULL <--> ";

    while(Head != NULL)
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

    InsertAtEnd(Head, 6);

    cout << "\nLinked List Content after InsertAtEnd:\n";
    PrintList(Head);

    return 0;
}