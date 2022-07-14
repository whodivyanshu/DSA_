#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // int n;
    int count = 1;
    // cin>>n;
    for(int j=100;j<=200;j++){
        count = 1;

    for(int i=2;i<=sqrt(j);i++){
        if(j%i==0){
            count = 0;
            break;
        }
        
    }
    if(count==1){
        cout<<j<<endl;
    }
    
    
    }



    return 0;
}