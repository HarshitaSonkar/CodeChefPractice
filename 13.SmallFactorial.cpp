#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int num;
	while(n--){
	    cin>>num;
	    int i;
	    int fact=1;
	    for(i=num;i>0;i--){
	        fact=fact*i;
	    }
	    cout<<fact<<endl;
	}
	return 0;
}
