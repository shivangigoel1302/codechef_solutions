#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int sum = 0;
	    vector<int>a(n);
	    for(int i = 0; i < n; i++){
	        cin>>a[i];
	        sum += a[i];
	    }
	    int count = 0;
	    for(int i = 0; i < n; i++){
	        if(a[i] + k > sum - a[i]){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
