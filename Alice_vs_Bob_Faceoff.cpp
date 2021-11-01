#include <iostream>
using namespace std;

bool wins(long long n){
    if(n == 0){
        return false;
    }
    if(n%2 == 1){
        return !wins(n-1);
    }
    if(n%4 != 0){
        return !wins(n/2);
    }
    return true;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    if(wins(n)){
	        cout<<"Alice"<<endl;
	    }
	    else{
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;
}
