#include<iostream>
using namespace std;
void ss(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int mini = i;
        for(int j=i; j<n; j++){
            if(arr[mini]>arr[j]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;

    }
   
}
int main(){
    int arr[] = {12,2,43,6,43};
    int n = sizeof(arr)/sizeof(arr[0]);

    ss(arr,n);
    // for(int i = 0; i<1; i++){
    //     cout<<"Largest Element in the arr"<<arr[n-1]<<" ";

    // }
    for(int x:arr) cout<<x<<" ";
    cout<<endl;
    int slarge;
   for(int i = n-2; i>=0; i--){
    if(arr[i] != arr[n-1]){ 
        slarge = arr[i];
        break;
        }
   }

   cout<<slarge;
    return 0;
}