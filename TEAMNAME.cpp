#include <iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;

int findsame(vector<char>v1,vector<char>v2){
    set<char>s;
    int same = 0;
    for(int i = 0 ; i < v1.size(); i++){
        s.insert(v1[i]);
    }
    for(int i = 0 ; i < v2.size(); i++){
        if(s.find(v2[i]) != s.end()){
            same++;
        }
    }
    return same;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ans = 0;
	    map<string,vector<char>>m;
	    for(int i = 0 ; i < n ; i++){
	        string str;
	        cin>>str;
	        m[str.substr(1)].push_back(str[0]);
	    }
	    for(auto it : m){
	        for(auto jt:m){
	            if(it.first != jt.first){
	                int x = findsame(it.second,jt.second);
	                int temp = (it.second.size()-x)*(jt.second.size() - x);
	                ans+= temp;
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
