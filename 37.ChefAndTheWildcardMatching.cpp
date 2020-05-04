#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string x,y;
	    cin>>x>>y;
	    bool b=true;
	    for(int i=0; i<x.size();i++){
	        if(x[i] == y[i] || x[i] =='?' || y[i] =='?'){
	            
			//b=true;
	         }else
	            b=false;
	            
	        }
	        if(b==true)
	        cout<<"Yes"<<endl;
	        else
	        cout<<"No"<<endl;
	    }
	
	return 0;
}
