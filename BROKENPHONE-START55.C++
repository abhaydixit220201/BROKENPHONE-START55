#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>y){
            cout<<"NEW PHONE"<<endl;
        }else if(y>x){
            
        cout<<"repair"<<endl;
            
        }else{
            cout<<"any"<<endl;
        }
    }
	// your code goes here
	return 0;
}