#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int power;
    cin>>power;
    int power1 = n;
    for(int i=1;i<=power;i++){
        n=n*power;
    }
    cout<<n<<endl;


    return 0;
}