#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int l[n],r[n];
	    for(int i=0;i<n;i++){
	        cin>>l[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>r[i];
	    }
	     int x=0;
	     int max=l[0]*r[0];
	     for(int j=1;j<n;j++){
	         if(l[j]*r[j]>max){
	             max=l[j]*r[j];
	             x=j;
	         }else if(l[j]*r[j]==max && r[x]<r[j]){
	             x=j;
	         }
	     }
	     cout<<x+1<<endl;
	}
	return 0;
}
