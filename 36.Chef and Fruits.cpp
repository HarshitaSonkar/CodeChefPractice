#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    int x=min(n,m);
	    int y=max(n,m);
	    if(k >= y-x){
	        cout<<0<<endl;
	    }else 
	    cout<< y-(x+k)<<endl;
	}
	return 0;
}
