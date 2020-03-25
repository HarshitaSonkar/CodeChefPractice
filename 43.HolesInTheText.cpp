#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int c1=0,c2=0;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='B'){
	            c1=c1+2;
	        }
	        if(s[i]=='A'|| s[i]=='D' || s[i]=='O' || s[i]=='P' || s[i]=='Q' || s[i]== 'R'){
	            c2=c2+1;
	        }
	    }
	    cout<<c1+c2<<endl;
	}
	return 0;
}
