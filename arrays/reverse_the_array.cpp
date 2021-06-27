#include <iostream>
#include <string>
using namespace std;
// complexity : O(N)
int main()
{
    string str = "raja";
    int st = 0, en = str.length();
    while(st < en){
        int temp = str[st];
        str[st] = str[en];
        str[en] = temp;
    }
    cout<<str;
    return 0;
}