#include <iostream>
using namespace std;

class node {
    public:
        int data; // Data Member
        node *next; // Pointer

        // Constructor
        node(int val)
        {
            data = val; // Given value data field.
            next = NULL; // Null
    }
};

// Add new value through Reference.

void inserthead(node* &head, int val){  // using head by Reference not by value.
    node* n = new node(val);
    n->next = head;
    head= n;
}

void insertAtTail(node* &head, int val) {
    // Create new node  n
    node* n = new node(val);

// Check 
    if(head==NULL){
        head = n;
        return;
    }

    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    
}
// Print value.
void display(node* head){ // Uses head by value not Reference.
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
// Create bool search function.
bool search(node* head, int key){
    node* temp = head;
    while (temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp= temp->next;
    }
    return false;
}

// Corner case:

// First node delete method.

void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    
    delete todelete;
}

// Delete Node :
void deletenode(node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!= val){
        temp = temp->next;
    }
    // Delete node: 
    node* todelete = temp->next;
    temp->next = temp->next->next;


    delete todelete;
}

// Reverse a linked list: iterative way 
node* reverse(node* &head){
    node* prevptr=NULL;
    node* currentptr=head;
    node* nextptr;

    while(currentptr!=NULL){
        nextptr = currentptr->next;
        currentptr->next=prevptr;

        prevptr=currentptr;
        currentptr=nextptr;

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

// Reverse K Nodes.

node* reverseK(node* &head, int k){
    // Create three pointers
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    int count=0;
    while(currptr!=NULL && count<k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;

    }
    if(nextptr!=NULL){
    head->next = reverseK(nextptr, k);
    }
    return prevptr;
}

int main(){
    // Create head 
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    // display(head);
    // inserthead(head, 0);
    // display(head);
    // cout<<search(head, 3)<<endl;
    // deletenode(head, 3);
    // deleteAtHead(head);
    // display(head);
    
    display(head);
    // node* newhead=reverse(head);
    // display(newhead);
    // node* newhead = reverseRecursive(head);
    // display(newhead);

    int k=2;
    node* newhead=reverseK(head,k);
    display(newhead);
    return 0;
}