#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i;
	int n;
//	cin>>n;
	int a[100];
	for(i=0;i<100;i++){
	    scanf("%d",&a[i]);
	     if(a[i]==42){
	       break;
	       }else{
	         printf("%d\n",a[i]);
	        }
	}
	return 0;
}
