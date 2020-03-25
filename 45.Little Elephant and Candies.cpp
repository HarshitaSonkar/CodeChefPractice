#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,c;
	    cin>>n>>c;
	    int a[n];
	    int s=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        s=s+a[i];
    	}
        	if(s<=c){
	            cout<<"Yes"<<endl;
         	}else
            	cout<<"No"<<endl;
	}

	return 0;
}
