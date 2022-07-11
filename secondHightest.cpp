#include<iostream>
#include<climits>
using namespace std;
int main(){
    int hightest = INT_MIN;
    int secondHightest = INT_MIN;
    int n;
    while(n!=-1){
        cin>>n;
        hightest = max(hightest,n);

    }
    cout<<hightest<<endl;




    return 0;
}