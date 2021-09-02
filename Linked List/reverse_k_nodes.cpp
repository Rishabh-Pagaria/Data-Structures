#include <iostream>
using namespace std;

// creating the class node 
class node{
    public:
    int data;
    node* next;

    // constructor
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtTail(node* &head, int val){
    node* temp = head;
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

}
void displayNode(node* head){
    while(head!= NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL";
}
node* reversekNodes(node* &head, int k){
    // base case
    if (!head)
        return NULL;
    node* current = head;
    node* nextptr = NULL;
    node* prev = NULL;
    int count = 0;
 
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k) {
        nextptr = current->next;
        current->next = prev;
        prev = current;
        current = nextptr;
        count++;
    }
 
    /* next is now a pointer to (k+1)th node
    Recursively call for the list starting from current.
    And make rest of the list as next of first node */
    if (nextptr != NULL)
        head->next = reversekNodes(nextptr,k);
 
    /* prev is new head of the input list */
    return prev;
}


int main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    displayNode(head);
    cout<<endl;
    
    node* reverseK = reversekNodes(head,2);
    displayNode(reverseK);
    return 0;
}