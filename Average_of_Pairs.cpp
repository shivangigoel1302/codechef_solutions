#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a(n);
	    int freq[2500] = {0};
	    for(int i = 0; i < n; i++){
	        cin>>a[i];
	        a[i] += 1000;
	        freq[a[i]]++;
	    }
	    long long ans = 0;
	    for(int i = 0; i < 2500; i++){
	        for(int j = 0; j < 2500; j++){
	            if((i+j)%2 == 0 && freq[(i+j)/2] != 0){
	                if(i != j){
	                    ans += (long long)freq[i] * freq[j];
	                }
	                else{
	                    ans += (long long)(freq[i]-1)*freq[j];
	                }
	            }
	        }
	    }
	    ans/=2;
	    cout<<ans<<endl;
	}
	return 0;
}
