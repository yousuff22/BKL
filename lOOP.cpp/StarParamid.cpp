#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i; j++){
            cout<<"  ";
        }
        //Star
        for(int j=0; j<2*i+1; j++){
            cout<<"* ";
        }
        // for(int j=0; j<n-i; j++){
        //     cout<<"  ";
        // }
        cout<<endl;
    }
    return 0;
}