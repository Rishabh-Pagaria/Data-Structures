#include <iostream>
using namespace std;

//this is a similar problem i.e. finding-duplicate-number
int *findTwoElement(int *arr, int n) {
        // code here
        int idx[n];
        int ans[2];
        for(int i = 0; i < n; i++){
            idx[i] = -1;
        }
        
        //solution
        for(int i = 0; i < n; i++){
            if(idx[arr[i]] != -1){
                ans[0] = arr[i];
            }
            else{
                idx[arr[i]] = arr[i];
            }
        }
        for(int i = 0; i < n; i++){
            if(idx[i] == -1){
                ans[1] = i;
                break;
            }
        }
        return ans;
    }