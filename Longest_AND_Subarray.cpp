#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    int ans = 1;
	    while(ans*2 <= a){
	        ans = ans*2;
	    }
	    int diff = max(ans/2,a-ans+1);
	    cout<<diff<<endl;
	}
	return 0;
}
