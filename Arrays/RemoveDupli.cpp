#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,2,2,3,3};
    int n = sizeof(arr)/4;

    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }   
    }
    cout<<i+1<<" ";
    


    return 0;
}