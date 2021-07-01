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
void insertAtHead(node* &head, int val){
    node* temp = head;
    node* n = new node(val);
    n->next = temp;
    head = n;
}
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

int main()
{
   
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    displayNode(head);
    cout<<endl;
    insertAtHead(head, 10);
    displayNode(head);
    return 0;
} 