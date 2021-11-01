#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    stack<int>s;
	     vector<int>freq(100001,0);
	    for(int i = 0; i < m; i++){
	        int a;
	        cin>>a;
	        if(freq[a] == 0){
	            s.push(a);
	            freq[a] = 1;
	        }

	    }

	    for(int j = 0; j < n; j++){
    	    int l;
    	    cin>>l;
    	    if(l == 1){
    	        int x;
    	        cin>>x;
    	        for(int i = 0; i < x; i++){
    	            int a;
    	            cin>>a;
    	            if(freq[a] == 0){
    	                freq[a] = 1;
    	                s.push(a);
    	            }
    	        }
    	    }
    	    else{
    	        int k;
    	        cin>>k;
    	        while(!s.empty() && k--){
    	            freq[s.top()] = 0;
    	            s.pop();
    	        }
    	    }
	    }

	    while(!s.empty()){
	        cout<<s.top()<<" ";
	        s.pop();
	    }
	    cout<<endl;
	}
	return 0;
}
