#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	int b;
	cin>>a;
	cin>>b;
	int sub;
	sub=a-b;
	if(sub%10==9){
	    cout<<sub-1;
	}else{
	    cout<<sub+1;
	}
	return 0;
}
