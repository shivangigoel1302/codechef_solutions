#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int i = 1;
	    for(i = 1; i < n; i++){
	        if(s[i] == s[i-1]){
	            cout<<"YES"<<endl;
	            break;
	        }
	    }
	    if(i == n){
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
