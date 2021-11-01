#include <bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
    return a > b;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    vector<int>topics(n);
	    vector<int>hours(n);
	    for(int i = 0; i < n; i++){
	        cin>>topics[i];
	    }
	    for(int i = 0; i < n; i++){
	        cin>>hours[i];
	    }
	    vector<vector<int>>subjects(m+1);
	    for(int i = 0; i < n; i++){
	        subjects[topics[i]].push_back(hours[i]);
	    }
	    for(int i = 0; i < subjects.size(); i++){
	        sort(subjects[i].begin(),subjects[i].end(),comp);
	    }

	    vector<int>visited(m+1,0);
	    vector<int>frequency(m+1,0);
	    multiset<pair<int,int>>s;
	    for(int i = 1; i < m+1; i++){
	        if(subjects[i].size()){
	            s.insert({subjects[i].back(),i});
	            subjects[i].pop_back();
	        }

	    }
	    while(k > 0 && !s.empty()){
	        auto curr = *s.begin();
	        if(k < curr.first){
	            break;
	        }
	        k -= curr.first;
	        s.erase(s.begin());
	        if(visited[curr.second] == 0){
	            frequency[curr.second] += 1;
	            visited[curr.second] = 1;
	        }
	        else{
	            frequency[curr.second] += 2;
	        }
	        if(subjects[curr.second].size() >= 2){
	            auto itr1 = subjects[curr.second].back();
	            subjects[curr.second].pop_back();
	            auto itr2 = subjects[curr.second].back();
	            subjects[curr.second].pop_back();
	            s.insert({itr1 + itr2,curr.second});
	        }
	    }
	    long long ans = 0;
	    for(int i = 0; i < m+1; i++){
	        ans += (frequency[i] + 1)/2;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
