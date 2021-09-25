#include <iostream>
using namespace std;
#define n 20

struct queue{
    int* arr;
    int front, back;
    public:
    queue(){
        arr = new int[n];
        front, back = -1;
    }
    void push(int x){
        if(back == n-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        back++;
        arr[back] = x;
        if(front == -1){
            front+=1;
        }
    }
    void pop(){
        if(front == -1 || front > back){
            cout<<"All elements are poped out";
            return;
        }
        front++;
    }
    int peek(){
        if(front == -1 || front > back){
            cout<<"All elements are poped out";
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front == -1 || front > back){
            cout<<"All elements are poped out";
            return true;
        }
        return false;
    }

};

int main(){
    queue q;
    q.push(21);
    q.push(11);
    q.push(14);
    q.push(19);
    q.push(12);
    cout<<q.peek()<<endl;
    return 0;
}