#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v1(n,0);
	    vector<int>v2(n,0);
	    for(int i=0;i<n;i++){
	        cin>>v1[i];
	    }
	    for(int j=0;j<n;j++){
	        cin>>v2[j];
	    }
	    sort(v1.begin(),v1.end());
	    sort(v2.begin(),v2.end());
	   
	    int i=0,j=0;
            int c=0;
	    while(i<n && j<n){
	        if(v1[i]<=v2[j]){
	            c=c+1;
	            i++;
	            j++;
	        }else{
	            j++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
