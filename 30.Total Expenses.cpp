#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double q;
	    double price;
	    cin>>q>>price;
	    if(q<1000){
	        double a=q*price;
	        cout<<fixed<<setprecision(6)<<a<<endl;
	       // cout<<a<<endl;
	    }else{
	        double b=(q*price)-(q*0.1*price);
	        //cout<<b<<endl;
	        cout<<fixed<<setprecision(6)<<b<<endl;
	    }
	}
	return 0;
}
