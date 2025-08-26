#include<iostream>
using namespace std;
int optixorr(int arr[],int n){
    int xor1 = 0;
    int xor2 = 0;
    for(int i= 0; i<n-1; i++){
        xor1 = xor1 ^ arr[i];
        xor2 = xor2 ^ (i+1);
    }
    xor2 = xor2 ^ n;
    return xor1 ^ xor2;
}
int xorx(int arr[], int n){
    int xor1 = 0;
    int xor2 = 0;
    for(int i= 1; i<=n; i++){
        xor1 = xor1 ^ i;
    }
    for(int i=0; i<n-1; i++){
        xor2 = xor2 ^ arr[i];
    }

    return xor1 ^ xor2;
}
int main(){
    int arr[] = {1,2,4,5};
    int n = 5;
    // int s2 = n *(n + 1)/2;
    // int sum = 0;

    // for(int i=0; i<n-1; i++){
    //     sum += arr[i];
    // }
    // int ans = s2 - sum;
    // cout<<ans;


    // using XOR...
    cout<<xorx(arr,n)<<endl;
    cout<<optixorr(arr,n);
    
    return 0;
}