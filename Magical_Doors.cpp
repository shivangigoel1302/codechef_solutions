#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    bool on = false;
	    string s;
	    cin>>s;
	    int ans = 0;
	    for(int i = 0; i < s.size(); i++){
	        if(s[i] == '0' && on){
	            continue;
	        }
	        if(s[i] == '1' && !on){
	            continue;
	        }
	        ans++;
	        on = !on;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
