#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        vector<int>a(t);
        for(int i=0;i<t;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans=INT_MAX;
        for(int j=0;j<t;j++){
            ans=min(ans,abs(a[j]-a[j+1]));
        }
        cout<<ans<<endl;
    }
return 0;
}
