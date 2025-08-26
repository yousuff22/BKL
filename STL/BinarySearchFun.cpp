#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];                //logn 
    }cout<<endl;
    int m;
    cin>>m;
    int ans = binary_search(arr,arr+n,m);
    
    cout<<ans;
    return 0;
}