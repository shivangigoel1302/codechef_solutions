#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    float x,n;
	cin>>x>>n;
	if(x + 0.5 <= n && fmod(x,5.0) == 0){
	    cout<<n-x-0.5<<endl;
	}
	else{
	    cout<<fixed<<setprecision(2)<<n<<endl;
	}
	return 0;
}
