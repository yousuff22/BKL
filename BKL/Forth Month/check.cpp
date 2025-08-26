#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>& arr) {
    for(int i = 0; i<arr.size()-1; i++) {
        if(arr[i] > arr[i+1] || arr[i] == arr[i+1]) {
            continue;
        }
        if(arr[i] != arr[i+1] - 1) {
            return false;
        }
    }
    return true;
}
int main() {
    vector<int> arr = {1,1,1,2,3};
    cout << check(arr);
    return 0;
}