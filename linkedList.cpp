#include<bits/stdc++.h>
using namespace std;

class Node {
    public : 
    int data;
    Node* next;

    // Default constructor
    Node () {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node (int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Linked list class to implement a linked list
class Linkedlist {
    Node* head;

public:
    // Default constructor
    Linkedlist () { head = NULL; }
    
    // Function to insert a node at the 
    // end of the linked list.
    void insertNode (int);

    // Function to print the linked list
    void printList();

    // Function to delete the node 
    // at given position

    void deleteNode(int);

};

// Function to delete the node
// at given position
void Linkedlist::deleteNode (int nodeOffset) {
    Node *temp1 = head, *temp2 = NULL;
    int ListLen = 0;

    if (head == NULL) {
        cout << "List empty." << endl;
        return;
    }

    // Find length of the linked-list.
    while (temp1 != NULL) {
        temp1 = temp1->next;
        ListLen++;
    }

    // Check if the position to be 
    // deleted is greater than the length 
    // of the linked list.
    if (ListLen < nodeOffset) {
        cout << "Index out of range" << endl;
        return;
    }

    // Declare temp1
    temp1 = head;

    // Deleting the head.
    if (nodeOffset == 1) {
        // Update 
    }
}

int main ()
{
    cout << " Hello!" << endl;
    return 0;
}