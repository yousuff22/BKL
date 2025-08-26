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

    auto itr = upper_bound(arr,arr+n,2);
    cout<<itr<<endl; //address
    cout<<*itr<<endl; //actual element
    

    return 0;
}