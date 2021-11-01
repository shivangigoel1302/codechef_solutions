#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  long long int p,a,b,c,x,y;
	    cin>>p>>a>>b>>c>>x>>y;
	   long long int divisor = min(x*a+b,y*a + c);
	    cout<<p/divisor<<endl;
	}
	return 0;
}
