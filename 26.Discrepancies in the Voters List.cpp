#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int n=n1+n2+n3;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	sort(a,a+n);
    vector<int>x;
    for(int j=1;j<n-1;j++){
        if(a[j]==a[j-1] && a[j]!=a[j+1]){
            x.push_back(a[j]);
        }
    }
    cout<<x.size()<<endl;
    for(int k=0;k<x.size();k++){
        cout<<x[k]<<endl;
    }
	
	return 0;
}
