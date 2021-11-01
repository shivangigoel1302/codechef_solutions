#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int p,n;
	    cin>>p>>n;
	    vector<int>dp(26,0);
	    for(int i = 0; i < s.size(); i++){
	        dp[s[i] - 'a']++;
	    }
	    for(int i = 0; i < 26; i++){
	        dp[i] *= p;
	        if(i){
	            dp[i] += dp[i-1];
	        }
	    }
	    for(int i = 0; i < n; i++){
	        int d;
	        cin>>d;
	        int sum = 0,flag = 0;
	        for(int j = 0; j < 26; j++){

	            if(dp[j] >= d){
	                cout<<char('a' + j)<<endl;
	                flag = 1;
	                break;
	            }
	        }
	        if(!flag){
	            cout<<-1<<endl;
	        }
	    }
	}
	return 0;
}
