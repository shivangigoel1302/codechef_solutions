#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long long int>arr(n);
	    long long int sum = 0;
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	        sum += arr[i];
	    }
	    vector<long long int>left(n,0);
	    vector<long long int>right(n,0);
	    left[0] = 1;
	    right[n-1] = 1;
	    for(int i = 1; i < n; i++){
	       left[i] = min(left[i-1] + 1,arr[i]);
	    }

	    for(int i = n-2; i >= 0; i--){
	       right[i] = min(right[i+1]+1,arr[i]);
	    }
	    long long int m = INT_MIN;
	    for(int i = 0; i < n; i++){
	        m = max(min(left[i],right[i]),m);
	    }
	    long long int result = sum - m*m;
	    cout<<result<<endl;
	}
	return 0;
}
