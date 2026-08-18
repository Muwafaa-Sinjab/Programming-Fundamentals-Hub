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

// Insert at the end
void InsertAtEnd(Node*& Head, int Val)
{
    /*
    1- Create a new node with the desired value.
    2- Traverse the list to find the last node.
    3- Set the next pointer of the last node to the new node.
    4- Set the previous pointer of the new node to the last node.
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

// Delete Last node
void DeleteLastNode(Node*& Head)
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

    InsertAtEnd(Head, 1);
    InsertAtEnd(Head, 2);
    InsertAtEnd(Head, 3);
    InsertAtEnd(Head, 4);
    InsertAtEnd(Head, 5);

    cout << "\nLinked List Content:\n";
    PrintList(Head);

    DeleteLastNode(Head);

    cout << "\n\nLinked List Content after delete:\n";
    PrintList(Head);

    return 0;
}