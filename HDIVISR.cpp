#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n <= 10){
	    cout<<10;
	    return 0;
	}
	for(int i = 10; i >=1; i--){
	    if(n%i == 0){
	        cout<<i;
	        return 0;
	    }
	}
	return 0;
}
