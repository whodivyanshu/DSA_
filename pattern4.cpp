#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // string str1 = " ";
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=n-1;k>i;k--){
            cout<<"*";
        }
        cout<<endl;

    }




    return 0;
}