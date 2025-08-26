#include<iostream>
using namespace std;
int main(){
    int arr[] = {11,11,22,22,33,33,44,44};
    int n = sizeof(arr)/4;
    int cnt = 0;
    for(int i=1; i<n; i++){
        int j = 0;
        if(arr[i] > arr[j]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}