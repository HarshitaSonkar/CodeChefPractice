#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int b,ls;
	    float max,min;
	    cin>>b>>ls;
	    max=sqrt(b*b + ls*ls);
	    min=sqrt(ls*ls - b*b);
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}
