#include<iostream>
#include<array>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/4;

    int temp = arr[0];
    for(int i = 0; i<n; i++){
        arr[i] = arr[1+i];
        if(i == n-1)arr[n-1] = temp;
    }

    for(int i:arr) cout<<i<<" ";

    return 0;
}