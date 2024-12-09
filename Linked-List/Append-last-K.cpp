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
        cout << temp->data << "->"; // Print the data
        temp = temp->next;         // Move to the next node
    }
    cout << endl;
}

// Function to calculate the length of the linked list
int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

// Function to append the last K nodes to the front of the linked list
node *kappend(node *&head, int K)
{
    int l = length(head); // Get the length of the linked list
    K = K % l;            // Handle cases where K is greater than the length
    if (K == 0 || head == NULL)
    {
        return head; // If K is 0, or the list is empty, no changes needed
    }

    node *newTail = head;
    node *newHead = head;

    // Find the new tail (l-K)th node and new head (l-K+1)th node
    int count = 1;
    while (count < l - K)
    {
        newTail = newTail->next;
        count++;
    }
    newHead = newTail->next;

    // Update pointers to make the list circular and adjust new head and tail
    newTail->next = NULL; // Break the list at the new tail
    node *temp = newHead;

    while (temp->next != NULL)
    {
        temp = temp->next; // Find the original tail
    }
    temp->next = head; // Link original tail to the original head

    return newHead; // Return the new head
}

int main()
{
    node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        insertAtTail(head, arr[i]);
    }

    display(head);
    node *newhead = kappend(head, 3);

    display(newhead);
    return 0;
}
