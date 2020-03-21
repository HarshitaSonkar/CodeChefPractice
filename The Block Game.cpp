#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int num,num1;
	    cin>>num;
	    num1=num;
	    int rem;
	    int ans=0;
	    while(num1 != 0){
	         rem=num1%10;
             ans=ans*10+rem;
             num1=num1/10;
	     }
	     if(num==ans){
	         cout<<"wins"<<endl;
	     }else{
	         cout<<"losses"<<endl;
	     }
       
	}
  return 0;
}
