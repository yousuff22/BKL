#include<iostream>
using namespace std;
int main(){
    int n; //size of the array..
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //precomtuping
    int hash[12] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<hash[num] <<endl;
    }
    return 0;
}