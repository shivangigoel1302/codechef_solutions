#include <iostream>
#include<bits/stdc++.h>
using namespace std;
using mint = atcoder::modint998244353
const int N = 200005;
int fact[N];

void process(){
    fact[0] = 1;
    for(int i = 1; i < N ; i++){
        fact[i] = fact[i-1]*mint(i);
    }
}

int ncr(int n,int r){
    if(n < r){
        return 0;
    }
    int ans = fact(n)/(fact(r)*fact(n-r));
    return ans;
}
int main() {
	// your code goes here
	process();
	int n;
	cin>>n;
	vector<int>arr(n),c1(30),c0(30);
	for(int i = 0 ; i < n ; i++){
	    cin>>arr[i];
	    for(int j = 0 ; j < 30 ; j++){
	        if((arr[i]<<j)&x){
	            c1[j]++;
	        }
	        else{
	            c0[j]++;
	        }
	    }
	}
	vector<mint>val(n+1,0);
	for(int bit = 0 ; bit< 30; bit++){
	    int p = c0[bit],q=c1[bit];
	    vector<int>f1(n+1,0),vector<int>f2(n+1,0);
	    for(int i = 0; i <= p; i++){
	        f2[i] = ncr(p,i);
	    }
	    for(int i = 0 ; i <= q; i++){
	        if(i%2){
	            f1[i] = ncr(q,i);
	        }
	        else{
	            f1[i] = 0;
	        }
	    }
	    auto f3 = atcoder::convolution(f1,f2);
	    for(int i = 0 ; i <=n ; i++){
	        val[i] += mint(pow(2,bit))*f3[i];
	    }
	}
	for(int i = 1; i <n ;i++){
	    val[i] += val[i-1];
	}
	int m;
	cin>>m;
	while(m--){
	    int q;
	    cin>>q;
	    cout<<val[q]<<endl;
	}
	return 0;
}
