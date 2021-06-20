#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "my name is rishabh";
    // upper case conversion
    // basic idea "a" - "A" = 32 that means "A" is 32 backwards than "a"
    // for(int i = 0; i < str.length(); i++){
    //     if(str[i] >= 'a' || str[i] <= 'z'){
    //         str[i] -= 32;
    //     }
    // }
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;
    string str1 = "HELLO JI";
    // changing from upper to lower case
    // now in previous case upper case was 32 steps backwards in the same way in this situation upper case is forward by 32 steps
    // for(int i = 0; i < str1.length(); i++){
    //     if(str1[i] >= 'A' || str1[i] <= 'Z'){
    //         str1[i] += 32;
    //     }
    // }
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    cout<<str1<<endl;
    return 0;
}