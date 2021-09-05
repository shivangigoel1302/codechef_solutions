#include <iostream>
#include<climits>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){

	    long long int n;
	    cin>>n;
	     long long int a[n];
	    int max1 = INT_MIN,min1 = INT_MAX;
	    for(int i = 0 ; i < n ;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    cout<<abs(a[n-1]-a[0]) + abs(a[1] - a[n-1]) + abs(a[0]-a[1])<<endl;
	}
	return 0;
}
