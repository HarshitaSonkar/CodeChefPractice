#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int p;
	    if(x1==x2 && y2>y1)
	    cout<<"up"<<endl;
	    else if(x1==x2 && y1>y2)
	    cout<<"down"<<endl;
	    else if(y1==y2 && x1>x2)
	    cout<<"left"<<endl;
	    else if(y1==y2 && x2>x1)
	    cout<<"right"<<endl;
	    else
	    cout<<"sad"<<endl;
	}
	return 0;
}
