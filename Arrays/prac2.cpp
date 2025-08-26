#include<iostream>
using namespace std;
void rotateD(int arr[], int n, int d){
    d = d%n;

    int temp[d];
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }
        for(int i=d; i<n; i++){
            arr[d-1] = arr[i];
        }
            for(int i=n-d; i<n; i++){
                arr[i] = temp[i-(n-d)];
            }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    rotateD(arr,n,d);
    for(int x:arr) cout<<x<<" ";
    return 0;
}