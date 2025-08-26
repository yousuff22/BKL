#include<iostream>
using namespace std;
int main(){
    int arr[] = {23,1,44,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    for(int i=0; i<n/2; i++){
        int temp = arr[n-1-i];
        arr[n-1-i] = arr[i];
        arr[i] = temp;
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}