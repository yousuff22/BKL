#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void reverse(int arr[], int n,int d){
    // for(int i = 0; i<d/2; i++){
    //     int temp = arr[d-1-i];
    //     arr[d-1-i] = arr[i];
    //     arr[i] = temp;
    // }
    d = d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){

    int d;
    cin>>d;
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    reverse(arr,n,d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
   return 0;
}