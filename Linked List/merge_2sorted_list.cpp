#include <iostream>
#include <vector>
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
node* mergeSorted(node* &head1, node* &head2){
    node* p1 = head1;
    node* p2 = head2;
    node* dummy = new node(-1);
    node* p3 = dummy;
    // This condition is for both the heads should get to NULL at the same time
    while(p1!= NULL && p2 != NULL){
        if(p1->data < p2->data){
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }else{
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }
    }
    // This condition is for if one head gets to NULL first i.e. head2
    while(p1!=NULL){
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    // This condition is for if one head gets to NULL first i.e. head1
    while(p2!=NULL){
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummy->next;
}
int main()
{
   
    node* head1 = NULL;
    node* head2 = NULL;
    vector<int> arr1{2,5,7,8};
    vector<int> arr2{6,9,10};
    for(int i = 0; i < arr1.size();i++){
        insertAtTail(head1,arr1[i]);
    }
    for(int i = 0; i < arr2.size();i++){
        insertAtTail(head2,arr2[i]);
    }
    displayNode(head1);
    cout<<endl;
    displayNode(head2);
    cout<<endl;
    node* newHead = mergeSorted(head1, head2);
    displayNode(newHead);
    return 0;
} 