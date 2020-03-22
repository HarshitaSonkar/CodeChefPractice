#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans;
        ans=a[0];
        int count=1; 
        for(int j=1;j<n;j++){
            if(ans>a[j]){
                count++;
                ans=a[j];
            }
        }
        cout<<count<<endl;
    }
	
	return 0;
}
