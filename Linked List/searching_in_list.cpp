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
bool searchKey(node* head, int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            cout<<"true";
            return true;
        }
        temp->next = temp;
    }
    cout<<"false";
    return false;
}
int main()
{
    
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    displayNode(head);
    searchKey(head, 10);
    return 0;
}