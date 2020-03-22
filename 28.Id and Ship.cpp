#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        char x;
        cin>>x;
        if(x=='b' || x=='B'){
            cout<<"BattleShip"<<endl;
        }else if(x=='c' || x=='C'){
            cout<<"Cruiser"<<endl;
        }else if(x=='d' || x=='D'){
            cout<<"Destroyer"<<endl;
        }else if(x=='f' || x=='F'){
            cout<<"Frigate"<<endl;
        }
    }
	// your code goes here
	return 0;
}
