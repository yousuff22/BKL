#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr = {2,6,5,8,11};
    int n = sizeof(arr)/4;
    int target;
    cin>>target;
    int left = 0;
    int right = n-1;

    sort(arr.begin(),arr.end());
    for(int x:arr){
        cout<<x<<" ";
    }cout<<endl;

    while (left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            cout<<"Yes";
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    
    
    return 0;
}