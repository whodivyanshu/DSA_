#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 1;
    int ll;
    int ul;
    cin>>ll;
    cin>>ul;
    for(int i=1;i<=n;i++){
        
        sum*=i;
        if(sum>=ll && sum<=ul){
            cout<<i<<endl;
        }
    }
    // cout<<sum<<endl;


    return 0;
}