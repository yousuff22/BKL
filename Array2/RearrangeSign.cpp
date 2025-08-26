#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,1,-2,-5,2,-4};
    int n = sizeof(arr)/4;

    int posIndex = 0;
    int negIndex = 1;

    int ans[n];

    for(int i=0; i<n; i++){
        if(arr[i] < 0){
           ans[negIndex] = arr[i];
            negIndex += 2;
        }
        else{
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}