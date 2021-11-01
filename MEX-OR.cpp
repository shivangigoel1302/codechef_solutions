#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    if(a == 1){
	        cout<<2<<endl;
	        continue;
	    }
	    if(a == 0){
	        cout<<1<<endl;
	        continue;
	    }
	    int ans = 1;
	    while(ans * 2 <= a){
	        ans = ans*2;
	    }
	    if(ans == a){
	        cout<<a<<endl;
	    }
	    else if(a == 2*ans -1){
	        cout<<a+1<<endl;
	    }
	    else{
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
