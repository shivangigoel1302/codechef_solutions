#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i =0; i < n; i++){
	        cin>>v[i];
	    }
	    stack<int>s;
	    vector<int>res(n,0);
	    int idx = 0;
	    while(idx < n){
	        if(s.size() <= 1){
	            s.push(idx++);
	        }
	        else{
	            int last = s.top();
	            s.pop();
	            if(v[last] >= v[idx] || v[last] >= v[s.top()]){
	                s.push(last);
	                s.push(idx++);
	            }
	            else{
	                res[last] = max(res[last],res[idx])+1;
	                res[idx] = res[last];
	            }
	        }
	    }
	    while(!s.empty()){
	        res[s.top()] = 0;
	        s.pop();
	    }
	    for(int i = 0; i < n; i++){
	        cout<<res[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
