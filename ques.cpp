#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

    int n;
    cin>>n; 
    int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    int mid = (n/2)+1;
    int count = 1;

    for(int i=0;i<n;i++){
        arr[i]=count;
        i++;
        count++;

    }
    for(int i=1;i<n;i++){
        arr[i]=mid;
        mid++;
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;




    }


    return 0;
}