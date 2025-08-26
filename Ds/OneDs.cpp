#include<iostream>
#include<vector>
using namespace std;
int linearsearch(vector<int> arr, int key) {

    for(int i : arr) {
        if(i == key) return i;
    }
    return 0;
}

int binarysearch(vector<int> arr, int key) {
    int start = 0;
    int end = arr.size()-1;


    while(start <= end) {
        int mid = start + ((end-start)/2);

        if(arr[mid] == key) {
            return arr[mid];
        }
        if(arr[mid] < key) {
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return 0;
}

int main() {
    vector<int> arr = {1,2,4,5};
    cout << binarysearch(arr,5);
    return 0;
}