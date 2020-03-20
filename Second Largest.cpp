#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int i;
	    int arr[i];
	    for(i=0;i<3;i++){
	        
	        cin>>arr[i];
	    }
	    sort(arr,arr+3);
	    cout<<arr[1]<<endl;
	}
	return 0;
}
