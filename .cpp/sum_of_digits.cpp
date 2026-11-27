#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
    	int a1,sum;
    	cin>>a1;
    	sum=0;
    	while(a1){
    	    sum+=a1%10;
    	    a1=a1/10;
    	    
    	}
    	cout<<sum<<endl;
	}
	return 0;

}
