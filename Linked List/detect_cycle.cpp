#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertNode (node* &head, int val){
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

void makeCycle(node* &head, int pos){
    node* temp = head;
    node* startNode;

    int count = 1;
    while(temp->next != NULL){
        if(count == pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}
// floyd cycle detection algorithm 
// Time Complexity: O(n)
bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;
    while(fast!= NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}
int main(){
    node* head;
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 5);
    insertNode(head, 6);
    insertNode(head, 7);
    insertNode(head, 8);
    insertNode(head, 9);

    makeCycle(head, 4);
    //To cheeck if cycle is happening or not 
    // displayNode(head);
    //It will run infinitely as there is a cycle in linekd list
    if(detectCycle(head)){
        cout<<"loof found";
    }else{
        cout<<"not found";
    }
    
    return 0;
}