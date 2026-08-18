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

// Find a node by value
Node* Find(Node* Head, int Val)
{
    while(Head != NULL)
    {
        if(Head->Value == Val)
            return Head;

        Head = Head->Next;
    }

    return NULL;
}

// Delete a node
void DeleteNode(Node*& Head, Node* NodeToDelete)
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

    // Traverse the list to find the node to be deleted
    Node* N1 = Find(Head, 4);

    DeleteNode(Head, N1);

    cout << "\n\nLinked List Content after delete:\n";
    PrintList(Head);

    return 0;
}