#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        a[i]=i+1;
	    }
	    if(k==n-1)cout<<-1<<endl;
	    else{

	            for(int i=1;i<n-k;i++){
	                int temp=a[i-1];
	                a[i-1]=a[i];
	                a[i]=temp;
	            }
	            for(int i=0;i<n;i++){
	                cout<<a[i]<<" ";
	            }
	            cout<<endl;
	    }

	}
	return 0;
}
