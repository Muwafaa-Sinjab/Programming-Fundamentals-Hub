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

int main()
{
    Node* Head = NULL;

    Node* Node1 = NULL;
    Node* Node2 = NULL;
    Node* Node3 = NULL;

    // Allocate 3 nodes in the heap
    Node1 = new Node();
    Node2 = new Node();
    Node3 = new Node();

    // Assign values
    Node1->Value = 5;
    Node2->Value = 10;
    Node3->Value = 15;

    // Connect nodes
    Node1->Next = Node2;
    Node1->Prev = NULL;

    Node2->Next = Node3;
    Node2->Prev = Node1;

    Node3->Next = NULL;
    Node3->Prev = Node2;

    // Print the linked list values
    Head = Node1;

    while (Head != NULL)
    {
        cout << Head->Value << " ";
        Head = Head->Next;
    }

    return 0;
}