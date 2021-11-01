#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long odd = 0,even = 0;
	    for(int i = 0; i < n; i++){
	        long long a;
	        cin>>a;
	        if(a%2 == 0){
	            even++;
	        }
	        else{
	            odd++;
	        }
	    }
	    int ans = min(n/2,odd);
	    ans += min(n-n/2, even);
	    cout<<ans<<endl;
	}
	return 0;
}
