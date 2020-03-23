#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int g;
	while(t--){
	    float h,cc,ts;
	    cin>>h>>cc>>ts;
	    if(h>50 && cc<0.7 && ts>5600)
	       // g=10;
	        cout<<10<<endl;
	    else if(h>50 && cc<0.7 && ts<=5600)
	       // g=9;
	        cout<<9<<endl;
	    else if(h<=50 && cc<0.7  && ts>5600)
	        //g=8;
	        cout<<8<<endl;
	    else if(h>50 && cc>=0.7 && ts>5600)
	        //g=7;
	        cout<<7<<endl;
	    else if(h>50 || cc<0.7 || ts>5600)
	        //g=6;
	        cout<<6<<endl;
	    else 
	       // g=5;
	        cout<<5<<endl;
	    }

	return 0;

}
