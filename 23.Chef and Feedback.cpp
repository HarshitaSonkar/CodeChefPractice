#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    string m = "101";
	    string n = "010";
	    int a=s.find(m);
	    int b=s.find(n);
	    if(a!= -1 || b!= -1){
	        cout<<"Good"<<endl;
	    }else{
	        cout<<"Bad"<<endl;
	    }
	 }
	return 0;
}
