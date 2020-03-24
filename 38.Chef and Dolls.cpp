#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int x;
	    for(int j=0;j<n;j++){
	        //int x;
	        int count=0;
	        for(int k=0;k<n;k++){
	            if(a[j]==a[k]){
	                count++;
	            }
	            }
	            if(count%2!=0){
	                //cout<<a[j]<<endl;
	                 x=a[j];
	                break;
	            }
	        
	    }
	    cout<<x<<endl;
	}
	return 0;
}
