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


node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

int main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    displayNode(head);
    cout<<endl;
    
    node* newHead = reverse(head);
    displayNode(newHead);
    return 0;
}