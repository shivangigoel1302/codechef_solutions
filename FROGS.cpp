#include <iostream>
#include<map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t){
	    int n;
	    cin>>n;
	    int weight[n];
	    int len[n];
	    for(int i = 0 ; i< n ; i++){
	        cin>>weight[i];
	    }
	    for(int i = 0 ; i < n ;i++){
	        cin>>len[i];
	    }
	    map<int,int>m;
	    for(int i = 0 ; i < n ; i++){
	        m[weight[i]] = i;
	    }
	    int ans = 0;
	    for(int i = 2; i <= n; i++){
	        int t1 = m[i];
	        int t2 = m[i-1];
	        int temp = 0;
	        if(t1 <= t2){
	            temp = (t2 + 1 - t1)/(len[t1]);
	            if((t2 + 1 - t1)%(len[t1]) != 0){
	                temp+=1;
	            }
	        }
	        ans += temp;
	        m[i] += temp * (len[t1]);
	    }
	   cout<<ans<<endl;
	   t -= 1;
	}
	return 0;
}
