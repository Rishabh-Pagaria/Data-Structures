// Let's call an array arr a mountain if the following properties hold:

// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... arr[i-1] < arr[i]
// arr[i] > arr[i+1] > ... > arr[arr.length - 1]
// Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

 

// Example 1:

// Input: arr = [0,1,0]
// Output: 1
// Example 2:

// Input: arr = [0,2,1,0]
// Output: 1


#include <iostream>
#include <vector>
using namespace std;
//approach 1 : it can be simply finding the max element by traversing linearly. time complexity O(N)
//apprach 2 : to get more optimized apprach use binray search concept. time complexity O(logN)
int peakIndexInMountainArray(vector<int>& arr) {
        int st = 0;
        int en = arr.size() - 1;
        int mid = st + (en - st)/2;
        while(st < en){
            if(arr[mid] < arr[mid+1]){
                st = mid + 1;
            }else{
                //we didn't do mid-1 beacuse we wanted the peak element. so, for e.g. if get the peak element by we did en = mid - 1, this will not give us that peak element
                en = mid;
            }
            mid = st + (en - st)/2;
        }
        return mid;
    }