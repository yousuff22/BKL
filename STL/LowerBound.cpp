#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];                //logn 
    }cout<<endl;

    int m;
    cin>>m;
    auto itr = lower_bound(arr,arr+n,m);
    cout<<itr<<endl; //address
    cout<<*itr<<endl; //actual element
    cout<<m-1<<endl;

    return 0;
}