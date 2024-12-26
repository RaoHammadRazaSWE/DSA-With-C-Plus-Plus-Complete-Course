#include <iostream>
using namespace std;

class node
{
public:
    int data;   // Data member
    node *next; // Pointer to the next node

    // Constructor
    node(int val)
    {
        data = val;  // Initialize data field with the given value
        next = NULL; // Initialize next pointer to NULL
    }
};

// Function to insert a node at the tail of the linked list
void insertAtTail(node *&head, int val)
{
    // Create a new node
    node *n = new node(val);

    // If the list is empty, set head to the new node
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
    // Add the new node at the end
    temp->next = n;
}

// Function to display the linked list
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
// Iterative way :

// Function to merge two sorted linked lists
node *merge(node *&head1, node *&head2)
{
    // Pointers for traversal
    node *p1 = head1;
    node *p2 = head2;

    // Dummy node to simplify merging
    node *dummyNode = new node(-1);
    node *p3 = dummyNode;

    // Traverse both lists and merge them
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    // Attach remaining nodes of the first list
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    // Attach remaining nodes of the second list
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    // Return the merged list, skipping the dummy node
    return dummyNode->next;
}

// Recursive way :

node* mergeRecursive(node* &head1, node* &head2){

    if (head1 == NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }

    node* result;
    if(head1->data<head2->data){
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    }
    else{
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }

    return result;
}
int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    // Initialize two sorted arrays
    int arr1[] = {1, 4, 5, 7};
    int arr2[] = {2, 3, 6};

    // Insert elements into the first linked list
    for (int i = 0; i < 4; i++)
    {
        insertAtTail(head1, arr1[i]);
    }

    // Insert elements into the second linked list
    for (int i = 0; i < 3; i++)
    {
        insertAtTail(head2, arr2[i]);
    }

    // Display the original lists
    cout << "List 1: ";
    display(head1);
    cout << "List 2: ";
    display(head2);

    // Merge the two lists
    // node *newHead = merge(head1, head2);
    node *newHead = mergeRecursive(head1, head2);

    // Display the merged list
    cout << "Merged List: ";
    display(newHead);

    return 0;
}
