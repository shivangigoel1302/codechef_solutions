#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    if(n%2 == 0){
	        cout<<2*n<<" "<<n<<endl;
	    }
	    else{
	        vector<int>primes= {3,5,7,11,13,17,19,23,29,31,37,41,43,47,54,59,61,67,71,73};
	        for(int i = 0; i < 20; i++){
	            if(n%primes[i]){
	                cout<<n*primes[i]<<" "<<n*(primes[i]-1)<<endl;
	                break;
	            }
	        }
	    }
	}
	return 0;
}
