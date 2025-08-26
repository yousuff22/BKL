#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,6,5,8,11};
    int n = sizeof(arr)/4;
    int target;
    cin>>target;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i+1; j<n; j++){
            sum = arr[i] + arr[j];
            if(sum == target){
                cout<<"Yes";
                break;
            }
        }
    }// TC -> o(n2)
    return 0;
}