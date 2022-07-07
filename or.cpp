#include<iostream>
using namespace std;
int main(){
    int n = 11;
    int bit = 3;
    int mask = 1;
    mask = mask<<(bit-1);
    int ans = mask|n;
    cout<<ans<<endl;


    return 0;
}