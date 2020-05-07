#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	     int num1,num2;
	     cin>>num1>>num2;
	     int sum = num1+num2;
	     cout<<max(num1,num2)<<" "<<sum<<endl;
	}
	return 0;
}
