#include <iostream>
using namespace std;

class node
{
public:
    int data;   // Data Member
    node *next; // Pointer

    // Constructor
    node(int val)
    {
        data = val;  // Given value data field.
        next = NULL; // Null
    }
};

void insertAtTail(node *&head, int val)
{
    // Create new node  n
    node *n = new node(val);

    // Check
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
// Print value.
void display(node *head)
{ // Uses head by value not Reference.
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Reverse a linked list: iterative way
node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currentptr = head;
    node *nextptr;

    while (currentptr != NULL)
    {
        nextptr = currentptr->next;
        currentptr->next = prevptr;

        prevptr = currentptr;
        currentptr = nextptr;
    }

    return prevptr;
}

// Reverse a linked list: Recursive way

node *reverseRecursive(node *&head)
{
    // Base Case: If the list is empty or has only one node
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    // Recursive Call
    node *newhead = reverseRecursive(head->next);

    // Reverse the pointers
    head->next->next = head;
    head->next = nullptr;

    return newhead;
}

int main()
{
    // Create head
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    node* newhead= reverse(head);
    display(newhead);
    // node* newhead = reverseRecursive(head);
    // display(newhead);
    return 0;
}