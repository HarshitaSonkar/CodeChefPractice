#include <iostream>
#include<bits/stdc++.h>
#include <boost/math/common_factor.hpp> 
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        cout<<__gcd(a,b)<<" "<<boost::math::lcm(a,b)<<endl;
      // long long g = __gcd(a,b);
       //long long l= (a*b)/g;
       //cout<<g<<" "<<l<<endl;
      }
	// your code goes here
	return 0;
}
