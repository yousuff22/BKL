#include<iostream>
using namespace std;
int binary_search(int arr[], int size, int key){
    int low = 0;
    int high = size - 1;

    int mid = low +(high - low) /2; //Opti Base

    while (low<=high){
        if(arr[mid] == key){
            return mid;
        }
        //Go to Right Wala part
        if(key > arr[mid]){
            low = mid+1;
        }   
        else{
            high = mid-1;
        }
        mid = low +(high - low) /2;
    }
    return -1;

    
}
int main(){

    int even[] = {2,4,6,8,10,12};
    int odd[] = {3,5,7,9,11,13}; // for odd arr

    int size = sizeof(even)/sizeof(even[0]);

    int key;
    cin>>key;

    int Index = binary_search(even , size, key);
    cout<<"Index of "<<key<<" is "<<Index<<endl;
    return 0;
}