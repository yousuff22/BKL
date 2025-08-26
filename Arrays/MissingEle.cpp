#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int missingele(int arr[], int n){
    int xor1 = 0;
    int xor2 = 0;
    for(int i=0; i<n-1; i++){
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);   
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;
}
int main(){
    int arr[] = {0,1,3};
    int n = 3;
    cout<<missingele(arr,n);
    
    return 0;
}