#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "jvvdsnvjijwjdinfvawed";
    // making a frequency array of size 26 because no. of alphabets we have is 26
    int fre[26];
    for(int i = 0; i < 26; i++){
        fre[i] = 0;
    }
    // ascii code of 'a' is 96 and so on it starts for other values
    // but there difference would be between 0 and 26
    // so here for every string s alphabet the fre[] is storing there frequency
    for(int i = 0; i < s.length();i++){
        fre[s[i] - 'a'] += 1;
    }

    int maxF = 0;
    char ans = 'a';
    for(int i = 0; i < 26; i++){
        if(fre[i] > maxF){
            maxF = fre[i];
            ans = i + 'a';
        }
    }
    cout<<ans;
    return 0;
    // Complexity : O(N)
}