#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	int s=0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    s=s+a[i];
	}
	int sum=0;
	for(int j=1;j<=n;j++){
	    sum=sum+j;
	}
	if(s==sum){
	    cout<<"YES"<<endl;
	}else
	cout<<"NO"<<endl;
	
	return 0;
}
