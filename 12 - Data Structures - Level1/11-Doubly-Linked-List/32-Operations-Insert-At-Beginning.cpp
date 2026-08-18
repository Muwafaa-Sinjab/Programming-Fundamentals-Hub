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

// Print node details
void PrintNodeDetails(Node* Head)
{
    if (Head->Prev != NULL)
        cout << Head->Prev->Value;
    else
        cout << "NULL";

    cout << " <--> " << Head->Value << " <--> ";

    if (Head->Next != NULL)
        cout << Head->Next->Value << "\n";
    else
        cout << "NULL";
}

// Print the linked list details
void PrintListDetails(Node* Head)
{
    cout << "\n\n";

    while (Head != NULL)
    {
        PrintNodeDetails(Head);
        Head = Head->Next;
    }
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

    PrintListDetails(Head);

    return 0;
}