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

// First node delete method.

void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;

    delete todelete;
}

// Delete Node :
void deletenode(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    // Delete node:
    node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
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
    // Delete specific node:
    deletenode(head, 3);
    // Delete first node:
    // deleteAtHead(head);
    display(head);
return 0;
}