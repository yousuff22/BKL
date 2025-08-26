#include<iostream>
using namespace std;
bool linearSearch(int arr[], int n, int key){

for(int i = 0; i<n; i++){
    if(arr[i] == key){
        return 1;
        }
    }
    return 0;
}
int main(){

    int arr[] = {32,1,5,6,87,-1,0};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<"Emter the Element to Search for " ;
    int key;
    cin>>key;

    bool found = linearSearch(arr,n,key);
    cout<<found<<endl;
    if(found){
        cout<<"Key is Found ";
    }
    else{
        cout<<"Key is Not Found ";
    }

    return 0;
}