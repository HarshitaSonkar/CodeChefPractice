#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int num;
	//int sum=0;
	while(n--){
	    int sum=0;
	    cin>>num;
	    while(num!=0){
	       int k=num%10;
	       sum=sum+k;
	       num=num/10;
	    }
	     cout<<sum<<"\n";
	}
	return 0;
}
