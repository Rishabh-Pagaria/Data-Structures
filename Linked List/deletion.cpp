#include <iostream>
using namespace std;

// bool myCompare(pair<int, int>p1, pair<int, int>p2){
//     return p1.first < p2.first;
// }
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

// node deletion
void deletion(node* &head, int key){
    node* temp = head;
    while(temp->next->data != key){
        temp = temp->next;
    }
    node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
int main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    displayNode(head);
    cout<<endl;
    
    deletion(head, 4);
    displayNode(head);
    return 0;
}