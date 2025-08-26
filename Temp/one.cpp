#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> arr(5,0);

    // it+1 moves to the next memory location Ex : 0 -> 1 index
    // it++ moves to the next itrator in dynamic Ex: map or set;
    
    for(int i = 0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    for(int i : arr) {
        cout << i << " ";
    }

    cout << endl;
    vector<int>::iterator it;
    it = arr.begin();

    while(it != arr.end()) {
        cout << *it << " ";
        it++;
    }

    cout << endl;
    for(it = arr.begin(); it != arr.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}