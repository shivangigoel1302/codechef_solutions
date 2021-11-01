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
	    int cnt = 0;
	    for(int i = 0; i < n; i++){
	        cin>>v[i];
	        if(v[i]%2){
	            cnt++;
	        }
	    }
	    if(cnt){
	        cout<<0<<endl;
	    }
	    else{
	        int a = 2;
	        int step = 0;
	        while(!cnt){
	            step++;
	            for(int i =0; i < n; i++){
	                v[i]/=2;
	                if(v[i]%2){
	                    cnt++;
	                }
	            }
	        }
	        cout<<step<<endl;
	    }

	}
	return 0;
}
