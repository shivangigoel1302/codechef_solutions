#include<iostream>

using namespace std;

int main(){
	int t,max=0,win=1,prev_a=0,prev_b=0;
	cin>>t;

	while(t--){
		int a,b;
		cin>>a>>b;
		a+=prev_a;
		b+=prev_b;
		if(a>b){
			if((a-b)>max){
				max=a-b;
				win=1;
			}
		}else{
			if((b-a)>max){
				max=b-a;
				win=2;
			}
		}
		prev_a=a;
		prev_b=b;
	}

	cout<<win<<" "<<max;

	return 0;
}
