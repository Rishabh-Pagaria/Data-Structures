#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    // This is a simple brute force method with O(n*k) complexity
    int maxi = INT_MIN;
    vector<int> ar{1,2,3,4,5,6,7};
    int k;
    cin>>k;
    vector<int> ans;
    for(int i = 0; i < ar.size()-k+1; i++){
        for(int j = i; j < k+i; j++){
            if(ar[j] > maxi){
                maxi = ar[j];
            }
        }
        ans.push_back(maxi);
    }
    cout<<"The maximum value of subarrays: ";
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}