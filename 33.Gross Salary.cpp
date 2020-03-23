#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double bs;
	    cin>>bs;
	    double hra,da,gs;
	    if(bs<1500){
	        hra=0.1*bs;
	        da=0.9*bs;
	    }else{
	       hra=500;
	       da=0.98*bs;
	    }
	    gs=bs+hra+da;
	    cout<<fixed<<setprecision(2)<<gs<<endl;
	    
	}
	return 0;
}
