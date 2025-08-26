#include<iostream>
#include<array>
using namespace std;
int main(){
    int arr[] = {1,2,4,3,0,5,0,4,2,0};
    int n = sizeof(arr)/4;
    
    int j = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] != 0){
            j = i;
            break;
        }
    }
    for(int i=j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i:arr) cout<<i<<" ";
    return 0;
}