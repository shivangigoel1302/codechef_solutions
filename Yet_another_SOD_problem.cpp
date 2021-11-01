#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int l,r;
	    cin>>l>>r;
	    long long int a = r/3;
	    a -= l/3;
	    if(l%3 == 0){
	        a++;
	    }
	    cout<<a<<endl;
	}
	return 0;
}
