#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s = "*";
    for(int i=0;i<n;i++){
        cout<<s;
        s+="*";
        cout<<endl;
    }
    return 0;
}