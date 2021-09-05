#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	    }
	    unordered_map<int,int>val;
	    unordered_map<int,int>freq;
	    int i;
	    for( i = 0; i < n; ){
	        int j = i+1;
	        while(j < n && arr[j] == arr[i]){
	            j++;
	        }
	        int count = j-i;
	        if(freq.find(count) != freq.end() || val.find(arr[i]) != val.end()){
	            cout<<"NO"<<endl;
	            break;
	        }
	        freq[count] = 1;
	        val[arr[i]] = 1;
	        i = j;
	    }
	    if(i == n){
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
