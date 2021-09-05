#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,p,k;
	    cin>>n>>x>>p>>k;
	    p--;
	    k--;
	    vector<int>arr(n);
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	    }
	    sort(arr.begin(),arr.end());
	    if(p == k){
	        int key = arr[p];
	        int count = 0;
	        int i = p;
	        if(key >= x){
	            while(i >=0 && arr[i] > x){
	                i--;
	                count++;
	            }
	            cout<<count<<endl;
	        }
	        else{
	            while(i < n && arr[i] < x){
	                i++;
	                count++;
	            }
	            cout<<count<<endl;
	        }
	    }
	    else if(p < k){
	        if(arr[p] < x){
	            cout<<-1<<endl;
	        }
	        else{

	             int i = p;
    	        int count = 0;
    	        while(i >= 0 && arr[i] > x){
    	            i--;
    	            count++;
    	        }
    	        cout<<count<<endl;
	        }

	    }
	    else{
	        if(arr[p] > x){
	            cout<<-1<<endl;
	        }
	        else{
	            int i = p;
	        int count = 0;
	        while(i < n && arr[i] < x){
	            i++;
	            count++;
	        }
	        cout<<count<<endl;
	        }

	    }
	}
	return 0;
}
