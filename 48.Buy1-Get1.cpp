#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s,st;
	    map<char,int> m;
	    int c;
	    int count=0;
	    cin>>s;
	    for(char c : s){
	        m[c]++;
	    }
	    for(auto st : m){
	        if(st.second % 2 == 0)
	            count =count+(st.second / 2);
	        else
	            count =count+(st.second / 2) + 1;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
