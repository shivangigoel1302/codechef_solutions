#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    vector<vector<int>>v(n+1,vector<int>(n+1,0));
	    stack<int>s;
	    for(int i = 0; i < m; i++){
	        int a,b;
	        cin>>a>>b;
	        v[a][b] = 1;
	    }
	    for(int i = 1; i <= n; i++){
	        s.push(i);
	    }
	    while(s.size() > 1){
	        int a = s.top();
	        s.pop();
	        int b = s.top();
	        s.pop();
	        if(v[a][b]){
	            s.push(b);
	        }
	        else{
	            s.push(a);
	        }
	    }

	    int x = s.top();
	    int flag = 1;
	    for(int i = 1; i <=n ; i++){
	        if((i != x) && (v[x][i] != 0 || v[i][x] != 1)){
	            flag = 0;
	        }
	    }
	    if(flag == 0){
	        cout<<"dead"<<endl;
	    }
	    else{
	        cout<<"alive "<<x<<endl;
	    }
	}
	return 0;
}
