#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int arr1[4]={1,2,3,4};
    int arr2[4]={1,2,3};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<arr1[i]<<" ";
    }


    return 0;
}