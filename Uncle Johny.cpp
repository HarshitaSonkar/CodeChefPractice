#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int a,k;
        cin>>a;
        //cin>>k;
        int arr[a];
        int ans;
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        cin>>k;
        ans=arr[k-1];
        sort(arr,arr+a);
        for(int j=0;j<a;j++){
            if(arr[j]==ans){
                cout<<j+1<<endl;
            }
        }
    }
	
	return 0;
}
