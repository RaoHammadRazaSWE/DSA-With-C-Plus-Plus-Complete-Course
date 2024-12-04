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

// Function to create an intersection between two linked lists at a given position
void intersect(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    // Traverse to the given position in the first list
    for (int i = 1; i < pos && temp1 != NULL; i++)
    {
        temp1 = temp1->next;
    }

    if (temp1 == NULL)
    {
        cout << "Position exceeds the length of the first list!" << endl;
        return;
    }

    node *temp2 = head2;
    // Traverse to the end of the second list
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    temp2->next = temp1; // Create the intersection
}

// Function to calculate the length of a linked list
int length(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// Function to find the intersection point of two linked lists
int intersection(node *head1, node *head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    int d = abs(l1 - l2); // Difference in lengths

    node *ptr1 = (l1 > l2) ? head1 : head2;
    node *ptr2 = (l1 > l2) ? head2 : head1;

    // Advance the pointer of the longer list by the difference in lengths
    while (d--)
    {
        if (ptr1 == NULL)
            return -1; // No intersection
        ptr1 = ptr1->next;
    }

    // Traverse both lists together to find the intersection point
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
            return ptr1->data; // Intersection found
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1; // No intersection
}

// Function to display the doubly linked list
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    // Insert elements into the first linked list
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);

    // Insert elements into the second linked list
    insertAtTail(head2, 5);
    insertAtTail(head2, 6);
    insertAtTail(head2, 7);
    insertAtTail(head2, 8);

    // Create an intersection at the 3rd node of the first list
    intersect(head1, head2, 3);

    // Display both lists
    display(head1);
    display(head2);

    // Find and display the intersection point
    cout << "Intersection at node with data: " << intersection(head1, head2) << endl;

    return 0;
}
