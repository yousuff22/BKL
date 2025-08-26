#include<iostream>
using namespace std;
void leftrotatebyD(int arr[], int n, int d){
    d = d%n;

    int temp[d];
    for(int i = 0; i<d; i++){
        temp[i] = arr[i];
    }

        for(int i = d; i<n; i++){
            arr[i-d] = arr[i];
        }

            for(int i = n-d; i<n; i++){
                arr[i] = temp[i-(n-d)];
            }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        }cout<<endl;

    int d;
    cin>>d;

    leftrotatebyD(arr,n,d);
    for(int i:arr) cout<<i<<" ";
    
    return 0;
    }