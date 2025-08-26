#include<iostream>
using namespace std;
int singleEle(int arr[] , int n){
    for(int i=0; i<n; i = i+2){
        if(arr[i] != arr[i+1]){
            return arr[i];
        }
    }
    return 0;
}
int main(){
    int arr[] = {2,2};
    int n = sizeof(arr)/4;

    cout << singleEle(arr,n);
    return 0;
}