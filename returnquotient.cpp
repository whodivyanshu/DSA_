#include<iostream>
using namespace std;

void checkque(int a,int b){
    if(a%b==0){
        cout<<a/b<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
}

int main(){
    int a,b;
    cin>>a>>b;
    checkque(a,b);



    return 0;
}