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

// Delete First node
void DeleteFirstNode(Node*& Head)
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
}

// Print node details
void PrintNodeDetails(Node* Head)
{
    if(Head->Prev != NULL)
        cout << Head->Prev->Value;
    else
        cout << "NULL";

    cout << " <--> " << Head->Value << " <--> ";

    if(Head->Next != NULL)
        cout << Head->Next->Value << "\n";
    else
        cout << "NULL\n";
}

// Print the linked list details
void PrintListDetails(Node* Head)
{
    cout << "\n\n";

    while(Head != NULL)
    {
        PrintNodeDetails(Head);
        Head = Head->Next;
    }
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

    PrintListDetails(Head);

    DeleteFirstNode(Head);

    cout << "\n\n\nLinked List Content after delete:\n";
    PrintList(Head);

    return 0;
}