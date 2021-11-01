#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    vector<int>v(n);
	    unordered_map<int,pair<int,int>>m;
	    for(int i = 0; i < n; i++){
	        cin>>v[i];
	        m[v[i]].first++;
	        m[v[i]].second = 0;
	    }
	    for(int i = 0; i < n; i++){
	        m[v[i]].first--;
	        int a = v[i] ^ x;
	        if(a != v[i]){
	             m[a].first++;
	             m[a].second++;
	        }

	        m[v[i]].first++;
	    }
	    int equal = INT_MIN;
	    int ans = 0;
	    for(auto it: m){
	        if(it.second.first > equal){
	            equal = it.second.first;
	            ans = it.second.second;
	        }
	        else if(it.second.first == equal){
	            if(ans > it.second.second){
	                ans = it.second.second;
	            }
	        }
	    }
	    cout<<equal<<" "<<ans<<endl;
	}
	return 0;
}
