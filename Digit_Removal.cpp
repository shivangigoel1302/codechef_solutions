#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    int pos = 0,ans = 0,num = n;
	    while(num > 0){
	        int dig = num%10;
	        num = num/10;
	        pos++;
	        if(dig == d){
	            num = num*(pow(10,pos));
	            num += (dig+1)*pow(10,(pos-1));
	            ans = num - n;
	            pos = 0;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
