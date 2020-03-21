#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i;
       // int m;
       // cin>>m;
    int a[n];
    int even=0;
    int odd=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
          even=even+a[i];
        }else{
          odd=odd+a[i];
        }
    }
        if(even>odd){
            cout<<"READY FOR BATTLE"<<endl;
        }else{
            cout<<"NOT READY"<<endl;
        }
    
	
	return 0;
}
