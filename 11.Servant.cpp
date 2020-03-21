#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int num;
	    cin>>num;
	    if(num<10){
	        cout<<"What an obedient servant you are!"<<endl;
	    }else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
