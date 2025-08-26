#include<iostream>
using namespace std;
int lowerbound(int arr[],int n,int key){
    for(int i=0; i<n; i++){
        if(arr[i] >= key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {3,5,8,15,19,19,19};
    int n = sizeof(arr)/4;

    int key;
    cin>>key;
    int ans = lowerbound(arr,n,key);

    cout<<ans<<" ";
    return 0;
}