#include<iostream>
using namespace std;
int main(){
    int a,b,x;
    cin>>a>>b>>x;
    switch (x)
    {
    case 1:
       cout<<a+b<<endl;
        break;

    case 2:
        cout<<a-b<<endl;;
        break;    
    
    case 3:
        cout<<a*b<<endl;
        break;

    case 4:
        cout<<a/b<<endl;

    default:
        cout<<"Wrong Choice"<<endl;
        break;
    }
    


    return 0;
}