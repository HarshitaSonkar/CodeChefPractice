#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int wt[n];
	    for(int i=0;i<n;i++){
	        cin>>wt[i];
	    }
	    sort(wt,wt+n);
	    k=min((n-k),k);
	    int s1=0;
	    for(int j=0;j<k;j++){
	        s1=s1+wt[j];
	    }
	    int s2=0;
	    for(int m=k;m<n;m++){
	        s2=s2+wt[m];
	    }
	    int diff=abs(s2-s1);
	    cout<<diff<<endl;
	}
	return 0;
}
