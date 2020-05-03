#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
	int n;
        cin>>n;
    while(n--){
        int count=0;
        string j;
        string s;
        cin>>j>>s;
        map<char,int>m;
        for(char A:j)
           m.insert({A,1});
        for(char A:s)
           if(m.find(A)!=m.end())
                  count++;
                  cout<<count<<endl;
           
    }
    return 0;
}
