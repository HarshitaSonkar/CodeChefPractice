#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int num;
	    cin>>num;
	    int sum=0;
	    int rem;
	    while(num!=0){
	        rem=num%10;
	        sum=sum*10+rem;
	        num=num/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
