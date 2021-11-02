// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.
#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> nums) {
        int count0 = 0, count1 = 0, count2 = 0;
        //Using counting sort approach
        //counting each colors and storing there frequencies in the variables
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                count0++;
            }
            else if(nums[i] == 1){
                count1++;
            }else{
                count2++;
            }
        }
        int i = 0;
        //now updating the array nums using those frequencies
        while(count0--){
            nums[i] = 0;
            i++;
        }
        while(count1--){
            nums[i] = 1;
            i++;
        }
        while(count2--){
            nums[i] = 2;
            i++;
        }
        // complexity would be O(N) + O(N) = O(2N)
       
};