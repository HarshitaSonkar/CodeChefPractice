#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[1000000];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	vector<int>vect(arr,arr+n);
	sort(vect.begin(),vect.end());
	//reverse(vect.begin(),vect.end());
	for(int j=0;j<n;j++){
	    cout<<vect[j]<<"\n";
	}
	return 0;
}
