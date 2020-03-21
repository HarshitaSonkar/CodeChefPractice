#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin>>n;
    while(n--){
	    int num;
	      cin>>num;
	    int s=0;
	    int k=num%10;
	    int h;
	      while(num>9){
	          h=num/10;
	          num=h;
	      }  
	       s=k+h;
	       cout<<s<<endl;
 	}
 return 0;
}
