#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   long long int n,k;
	    cin>>n>>k;
	    long long int arr[n];
	    long long int maximum = INT_MIN;
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	        maximum =max(maximum,arr[i]);
	    }
	   for(int i = n-k-1; i >= 0; i--){
	       arr[i] += arr[i+k];
	   }

	    for(int i = 0; i < n; i++){
	        maximum= max(maximum,arr[i]);
	    }
	    cout<<maximum<<endl;
	}
	return 0;
}
