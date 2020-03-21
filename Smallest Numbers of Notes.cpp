#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int i;
	    int den[i]={100,50,10,5,2,1};
	    int num;
	    cin>>num;
	    int count=0;
	    for(i=0;i<6;i++){
	        count+=num/den[i];
	        num=num%den[i];
	     }
	   cout<<count<<endl;
	}
	return 0;
}
