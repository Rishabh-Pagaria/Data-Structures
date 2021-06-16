#include <iostream>
using namespace std;
// Check if the word is a palindrome or not
// Time Complexity : O(N/2)
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    bool check = 1;
    for(int i = 0; i <= n/2; i++){
        if(arr[i] != arr[n - i - 1]){
            check = 0;
            cout<<"Word is not a palindrome";
            break;
        }
    }
    if(check == true){
        cout<<"word is a palindrome";
    }
    return 0;
}