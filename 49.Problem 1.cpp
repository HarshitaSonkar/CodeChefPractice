#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	   
	    int sum;
	    int num1,num2;
	    cin>> num1>>num2;
	    int res1,res2;
	    int sum1=0,sum2=0;
	    while(num1>0){
	       res1=num1%10;
	       sum1=sum1*10+res1;
	       num1=num1/10;
	    }
	    while(num2>0){
	        res2=num2%10;
	        sum2=sum2*10+res2;
	        num2=num2/10;
	   }
	   sum=sum1+sum2;
	  // cout<<sum<<endl;
	   int sum3=0;
	   int res3;
	   while(sum>0){
            res3=sum%10;
	       sum3=sum3*10+res3;
	       sum=sum/10;
	   }
	   cout<<sum3<<endl;
	    
	 }
   #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	   
	    int sum;
	    int num1,num2;
	    cin>> num1>>num2;
	    int res1,res2;
	    int sum1=0,sum2=0;
	    while(num1>0){
	       res1=num1%10;
	       sum1=sum1*10+res1;
	       num1=num1/10;
	    }
	    while(num2>0){
	        res2=num2%10;
	        sum2=sum2*10+res2;
	        num2=num2/10;
	   }
	   sum=sum1+sum2;
	  // cout<<sum<<endl;
	   int sum3=0;
	   int res3;
	   while(sum>0){
            res3=sum%10;
	       sum3=sum3*10+res3;
	       sum=sum/10;
	   }
	   cout<<sum3<<endl;
	    
	 }
   	return 0;
}

   
