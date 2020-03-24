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
	        if(s[i]=='a')
	        c1++;
	        else
	        c2++;
	    }
	    int m=min(c1,c2);
	    cout<<m<<endl;
	}
	return 0;
}
