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

class queue{
    public:
    node* front;
    node* back;
    queue(){
        front = back = NULL;
    }
    void push(int x){
        node* n = new node(x);
        if(front == NULL){
            front = n;
            back = n;
            return;
        }
        back->next = n;
        back = n;
    }
    void pop(){
        if(front == NULL){
            cout<<"Elements has been popped out";
            return;
        }
        node* todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek(){
        if(front == NULL){
            cout<<"Elements has been popped out";
            return -1;
        }
        return front->data;
    }
    bool empty(){
        if(front == NULL){
            return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.push(10);
    q.push(11);
    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek();
    return 0;
}