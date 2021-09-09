#include <iostream>
using namespace std;
#define n 1000

struct stack{
    int top;
    int* arr;
    public:
    stack(){
        arr = new int[n];
        top = -1;
    };
    void push(int x){
        if(top >= n -1){
            return;
        }
        else{
            top++;
            arr[top] = x;
        }
    }
    int pop(){
        if(top == -1){
            cout<<"The laast element is poped out";
            return -1;
        }
        int x = arr[top];
        top--;
        return x;
    }
    int Top(){
        if(top < 0){
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top == -1;
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.pop();
    cout<<endl;
    cout<<st.Top();
    cout<<endl;
    cout<<st.pop();
    
    return 0;
}