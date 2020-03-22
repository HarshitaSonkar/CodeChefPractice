#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int count=0;
	while(t--){
	    int x1,y1,x2,y2,x3,y3;
	    cin>>x1>>y1>>x2>>y2>>x3>>y3;
	    int d1= pow((x2-x1),2)+pow((y2-y1),2);
	    int d2= pow((x3-x2),2)+pow((y3-y2),2);
	    int d3= pow((x1-x3),2)+pow((y1-y3),2);
	    if(d1==d2+d3 || d2==d1+d3 || d3==d1+d2){
	        count++;
	        
	    }
	}
	cout<<count;
	return 0;
}
