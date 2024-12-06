#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    // Constructor to initialize a node
    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

// Function to insert a node at the head of the doubly linked list
void insertAtHead(node *&head, int val)
{
    node *newNode = new node(val); // Create a new node
    newNode->next = head;          // Point the new node's next to the current head
    if (head != NULL)
    {
        head->prev = newNode; // Update the current head's previous pointer
    }
    head = newNode; // Update the head to the new node
}

// Function to insert a node at the tail of the doubly linked list
void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val); // If the list is empty, insert at the head
        return;
    }

    node *n = new node(val); // Create a new node
    node *temp = head;       // Temporary pointer to traverse the list

    while (temp->next != NULL)
    {
        temp = temp->next; // Move to the last node
    }

    temp->next = n; // Link the last node to the new node
    n->prev = temp; // Link the new node back to the last node
}

// Function to display the doubly linked list
void display(node *head)
{
    node *temp = head; // Temporary pointer to traverse the list
    while (temp != NULL)
    {
        cout << temp->data << " "; // Print the data
        temp = temp->next;         // Move to the next node
    }
    cout << endl;
}

// Function to delete the head node
void deleteAtHead(node *&head)
{
    if (head == NULL)
        return; // If the list is empty, do nothing

    node *toDelete = head; // Store the current head
    head = head->next;     // Update the head to the next node
    if (head != NULL)
    {
        head->prev = NULL; // Set the new head's previous pointer to NULL
    }

    delete toDelete; // Free the memory of the old head
}

// Function to delete a node at a specific position
void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head); // If deleting the first node, use `deleteAtHead`
        return;
    }

    node *temp = head; // Temporary pointer to traverse the list
    int count = 1;

    while (temp != NULL && count != pos)
    {
        temp = temp->next; // Move to the desired position
        count++;
    }

    if (temp == NULL)
        return; // If position is out of bounds, do nothing

    // Update pointers to bypass the node to be deleted
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp; // Free the memory of the node
}

int main()
{
    node *head = NULL;

    // Insert elements into the doubly linked list
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);

    insertAtHead(head, 5);
    display(head);

    // Delete the head node
    deleteAtHead(head);
    display(head);

    // Delete a node at a specific position
    deletion(head, 3);
    display(head);

    return 0;
}
