#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,10};
    int n = sizeof(arr)/4;
    int i= 0;
    for(int j = 1; j<n; j++){
        if(arr[i] < arr[j]){
            cout<<"True";
        }
        else{
            cout<<"False";
            }
        }

       return 0;
}