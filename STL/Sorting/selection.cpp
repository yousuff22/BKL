#include<iostream>
#include<vector>
#include<array>
using namespace std;
void SelectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int mini = i;
        for(int j=i; j<n; j++){
            if(arr[mini]>arr[j]) {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    SelectionSort(arr,n);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";

    }   cout<<endl;

    return 0;
}

