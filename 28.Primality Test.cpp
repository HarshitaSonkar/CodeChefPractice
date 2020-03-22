#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int flag=0;
	    long long num;
	    cin>>num;
	    for(int i=2;i<num/2;i++){
	        if(num%i==0){
	            flag=i;
	            break;
	        }
	    }
	    if(flag==0){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	 }
	return 0;
}
