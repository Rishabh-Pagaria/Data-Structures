#include <iostream>
#include <array>
#include <climits>
using namespace std;
// O(N) complexity
int main() {
	int min = INT_MAX, max = INT_MIN;
	int ar[] = {1, 2, 10, 5, 21, 9};
	int num = sizeof(ar)/sizeof(ar[0]);
	if(num == 1){
	    min = ar[0];
	    max = ar[0];
	}
	if(num == 2){
	    if(ar[0] > ar[1]){
	        max = ar[0];
	        min = ar[1];
	    }else{
	        max = ar[1];
	        min = ar[0];
	    }
	}
	for (int i = 0; i < num; i++) {
	    if(ar[i] < min){
	        min = ar[i];
	    }
	    if(ar[i] > max){
	        max = ar[i];
	    }
	}
	cout<<min<<endl;
	cout<<max<<endl;
	return 0;
}