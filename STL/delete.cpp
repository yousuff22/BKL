#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    cout<<min(n1,n2)<<endl;
    for(int i = min(n1,n2); i>=1; i--){
        if(n1%i==0 and n2%i==0){
            cout<<"GCD is : "<<i<<endl;
            break;
        }
    }
    // int HCF;
    // for(int i = 1; i<= max(n1,n2); i++){
    //     if(n1%i==0 and n2%i==0){
    //         // cout<<i<<" ";
    //          HCF = i;
    //     }
    // }

    // cout<<HCF<<" ";

    return 0;
}