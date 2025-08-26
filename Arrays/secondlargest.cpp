#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,3,23,12,53,4,54,5,8};
    int n = sizeof(arr)/4;
    int maxx;

    for(int i=1; i<n; i++){
        if(arr[0] < arr[i]){
            maxx = arr[i];
        }
    }
    cout<<"Largest Element "<<maxx<<endl;

    int secmaxx = -1;
    for(int i = 0; i<n; i++){
        if(secmaxx < arr[i] && arr[i] != maxx){
            secmaxx = arr[i];
        } 
    }
    cout<<"Second Largest Element "<<secmaxx<<endl;

    int small = arr[0];
        for(int i=1; i<n; i++){
        if(small > arr[i]){
            small = arr[i];
        }
    }
    cout<<"Smallest Element "<<small<<endl;



    int ssmall = arr[0];
    for(int i = 1; i<n; i++){
        if(ssmall > arr[i] && arr[i] != small){
            ssmall = arr[i];
        } 
    }
    cout<<"Second Smallest Element"<<ssmall<<endl;
    return 0;
}