#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,p,x,y;
	    cin>>n>>p>>x>>y;
	    vector<int>v(n);
	    for(int i = 0; i < n; i++){
	        cin>>v[i];
	    }
	    int ans = 0;
	    for(int i = 0;i < p; i++){
	        if(v[i]){
	            ans += y;
	        }
	        else{
	            ans += x;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
