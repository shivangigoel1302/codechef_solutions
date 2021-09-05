#include <iostream>
#include<vector>
#include<cstring>
using namespace std;



bool available(string f,string m){
   if(m.substr(0,2) < f.substr(0,2)){
       return false;
   }
   if(m.substr(0,2) > f.substr(6,2)){
       return false;
   }
   if(m.substr(0,2) == f.substr(0,2) && m.substr(3,2) < f.substr(3,2)){
       return false;
   }
   if(m.substr(0,2) == f.substr(6,2) && m.substr(3,2) > f.substr(9,2)){
       return false;
   }
   return true;

}

string convert(string t, string s){
    if(t.substr(0,2) =="12" && t.substr(3) =="00" && s == "AM"){
        return "00:00";
    }
    if(t.substr(0,2) =="12" && t.substr(3) =="00" && s == "PM"){
        return "12:00";
    }
    if(s == "AM"){
        if(t.substr(0,2) == "12"){
            string ans ="00:";
            ans += t.substr(3,2);
            return ans;
        }
        return t.substr(0,5);
    }
    if(t.substr(0,2) == "12"){
        return t.substr(0,5);
    }
    int a = stoi(t.substr(0,2));
    //
    int b = 12 + a;

    string ans = "";
    string c = to_string(b);
    //cout<<c;
    ans = ans + c +":";
    //cout<<ans;
    ans += t.substr(3,2);
    //cout<<ans;
    return ans;
}

int main() {
	// your code goes here
	int t;
	 cin>>t;
	while(t--){
	    string meet;
	    cin>>meet;
	    string next;
	    cin>>next;
	    string m = convert(meet,next);
	    // cout<<meet<<"-"<<m<<",";
	    int n;
	    cin>>n;
	    vector<string>frend(n);
	    for(int i = 0 ; i < n ; i++){
	        string first;
	        cin>>first;
	        string ftime;
	        cin>>ftime;
	        string second;
	        cin>>second;
	        string stime;
	        cin>>stime;
	       string start = convert(first,ftime);
	       string end = convert(second,stime);
	       frend[i] = start +" "+ end;
           //cout<<frend[i]<<endl;
	    }
	   for(int i = 0 ; i < n ; i++){
	       if(available(frend[i],m)){
	           cout<<1;
	       }
	       else{
	          cout<<0;
	       }
	   }
	    cout<<endl;
	}
	return 0;
}
