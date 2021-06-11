//Let's code using brute force approach
#include <iostream>
using namespace std;

// time complexity : O(N2)
bool targetSum(int a[], int n, int target){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n;j++){
            if(a[i]+a[j] == target){
                cout<<a[i]<<" and "<<a[j]<<endl;
                return true;
            }
        }
    }
    return false;

}
//Optimised approach -> Time Complexity: O(N)
// For this approach array should be in sorted order
bool pairSum(int a[], int n, int target){
    int st = 0, en = n - 1;
    while(st < n){
        if(a[st] + a[en] < target){
            st++;
        }
        else if(a[st] + a[en] > target){
            en--;
        }
        else{
            cout<<"Complexity O(N) : "<<a[st]<<" and "<<a[en];
            return true;
        }
    }
    return false;
}

int main()
{
    int n,target;
    cin>>n>>target;
    int a[n];
    for(int i=0; i < n;i++){
        cin>>a[i];
    }
    //complexity : O(N2)
    targetSum(a, n, target);

    // sorted array
    //complexity : O(N)
    int arr[] = {1, 3, 6, 10, 13, 19}, k = 23;
    pairSum(arr, 6, k);

}