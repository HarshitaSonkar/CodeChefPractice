#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int x1,y1;
        cin>>x1>>y1;
        int x2,y2;
        cin>>x2>>y2;
        int x3,y3;
        cin>>x3>>y3;
      //  double d1=sqrt(pow((x2-x1),2)+(pow(y2-y1),2));
       int d1=((x2-x1)*(x2-x1)+ (y2-y1)*(y2-y1));
       // double d2=sqrt(pow((x3-x2),2)+(pow(y3-y2),2));
       int d2=((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2));
       // double d3=sqrt(pow((x3-x1),2)+(pow(y3-y1),2));
       int d3=((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1));
        if(d*d>=d1 && d*d>=d3 || d*d>=d3 && d*d>=d2 || d*d>=d1 && d*d>=d2){
            cout<<"yes"<<endl;
        }else
        cout<<"no"<<endl;
        
    }
	// your code goes here
	return 0;
}
