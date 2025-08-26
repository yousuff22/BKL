#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {10,22,12,3,0,6};
    int n = sizeof(arr)/4;

    vector<int> v;
    int maxi = INT16_MIN;

    for(int i=n-1; i>=0; i--){
        if(arr[i] > maxi){
            v.push_back(arr[i]);
        }
         maxi = max(arr[i],maxi);
    }

    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}