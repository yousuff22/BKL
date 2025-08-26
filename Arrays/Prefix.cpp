#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    int prefix[n];
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
        prefix[i] = sum;
    }
    
    cout<<endl;
    for(int x:prefix){
        cout<<x<<" ";
    }cout<<endl;
    int i = 1;
    int j = 1;
    cout<< prefix[j+2] - prefix[1];
    return 0;
}