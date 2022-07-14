#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    
    int count = 0;
    while(n>0){
        sum+=n%10;
        n=n/10;
        count++;
    }
    cout<<sum<<endl;
    cout<<count<<endl;


    return 0;
}