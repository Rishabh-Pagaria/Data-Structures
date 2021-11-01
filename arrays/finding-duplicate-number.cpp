#include <iostream>
#include <vector>

using namespace std;
int findDuplicate(vector<int> nums){

    //here we have given the condition that the integers in array nums range from (1,n) where n is the size of array nums
    const int n = nums.size(); /* or 1e6 + 2 i.e.(1* 10^6) + 2 */
    vector<int> idx(n);
    int ans = 0;
    for (int i = 0; i < n; i++){
        idx[i] = 0;
    }
        
    for(int i = 0; i < nums.size(); i++){
        if(idx[nums[i]] != 0){
            ans = nums[i];
        }else{
            idx[nums[i]] = nums[i];
        }
    }
    return ans;
}