#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //this vector would be used as to return the final answer
        vector<vector<int>> mergeIntervals;
        sort(intervals.begin(), intervals.end());
        if(intervals.size() == 0){
            return mergeIntervals;
        }
        //this vector has been made to compare the lower and maximum limit
        vector<int> tempInterval = intervals[0];
        for(int i = 1; i < intervals.size(); i++){
            if(tempInterval[1] >= intervals[i][0]){
                tempInterval[1] = max(intervals[i][1], tempInterval[1]);
            }else{
                mergeIntervals.push_back(tempInterval);
                tempInterval = intervals[i];
            }
        }
        mergeIntervals.push_back(tempInterval);//this line extra again in order to include the last interval otherwise it would left behind as loop gets over
        return mergeIntervals;
    }