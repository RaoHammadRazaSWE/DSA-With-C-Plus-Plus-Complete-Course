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
        data = val;  // Assign given value to data field
        next = NULL; // Initialize next pointer to NULL
    }
};

void insertAtTail(node *&head, int val)
{
    // Create a new node
    node *n = new node(val);

    // Check if the list is empty
    if (head == NULL)
    {
        head = n;
        return;
    }

    // Traverse to the end of the list
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n; // Link the new node
}

// Print linked list
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Create a cycle in the linked list
void makeCycle(node* &head, int pos)
{
    node* temp = head;
    node* startNode = nullptr;
    int count = 1;

    // Traverse to find the position
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startNode = temp; // Mark the startNode at the position
        }
        temp = temp->next;
        count++;
    }

    // Link the last node to the startNode
    temp->next = startNode;
}

// Detect a cycle in the linked list
bool detectCycle(node *&head)
{
    // Create two pointers
    node *slow = head;
    node *fast = head;

    // Traverse the list
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;       // Slow moves one step
        fast = fast->next->next; // Fast moves two steps

        if (fast == slow)
        {
            return true; // Cycle detected
        }
    }
    return false; // No cycle
}

// Remove a cycle in the linked list
void removeCycle(node *&head)
{
    // Create two pointers
    node *slow = head;
    node *fast = head;

    // Detect the cycle first
    do
    {
        slow = slow->next;       // Slow moves one step
        fast = fast->next->next; // Fast moves two steps
    } while (slow != fast);

    // Reset one pointer to the head
    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // Break the cycle
    slow->next = NULL;
}

int main()
{
    // Create the linked list
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    // Create a cycle for testing
    makeCycle(head, 3);

    // Detect and display whether a cycle exists
    cout << "Cycle detected: " << (detectCycle(head) ? "Yes" : "No") << endl;

    // Remove the cycle
    removeCycle(head);

    // Detect and display again after removal
    cout << "Cycle detected after removal: " << (detectCycle(head) ? "Yes" : "No") << endl;

    // Display the linked list
    display(head);

    return 0;
}
