#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int ele,candy;
	    cin>>ele>>candy;
	    int sum = 0;
	    while(ele--){
	        int a;
	        cin>>a;
	        sum += a;
	    }
	    if(sum <= candy){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
