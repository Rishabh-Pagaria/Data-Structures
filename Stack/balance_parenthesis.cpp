#include <iostream>
#include <stack>
using namespace std;

bool isValid (string word){
    stack<char> st;
    bool ans = true;
    for(int i = 0; i < word.size(); i++){
        if(word[i] == '(' || word[i] == '{' || word[i] == '['){
            st.push(word[i]);
        }
        else if(!st.empty() && word[i] == ')'){
            if(st.top() == '('){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(!st.empty() && word[i] == ']'){
            if(st.top() == '['){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(!st.empty() && word[i] == '}'){
            if(st.top() == '{'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    else{
        return true;
    }

}

int main(){
    if(isValid("({[])")){
        cout<<"Valid string";
    }else{
        cout<<"Unvalid string";
    }
    return 0;
}