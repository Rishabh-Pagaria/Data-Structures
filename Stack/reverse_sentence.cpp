#include <iostream>
#include <stack>
using namespace std;

void reverseStentence(string s){
    stack<string> st;
    
    for(int i = 0; i < s.length(); i++){
        string word = "";
        while(s[i] != ' ' && i < s.length()){
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}
int main(){
    string s = "hey, how you doin'n?";
    reverseStentence(s);
    return 0;
}