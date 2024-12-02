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
// Create bool search function.
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
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
    cout<<search(head, 3)<<endl;
    return 0;
}