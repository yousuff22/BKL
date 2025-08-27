#include <bits/stdc++.h>
using namespace std;
void insertFun(vector<int>& arr, int temp) {
    
    if(arr.size() == 0 || arr[arr.size() -1] <= temp) {
        arr.push_back(temp);
        return;
    }
    int Lastval = arr[arr.size() - 1];
    arr.pop_back();
 
    insertFun(arr, temp);
    arr.push_back(Lastval);
}

void sorttArray(vector<int>& arr) {

    if(arr.size() == 1) return;

    int Lastval = arr[arr.size() - 1];
    arr.pop_back();

    sorttArray(arr);

    insertFun(arr, Lastval);

}
int main() {
    vector<int> arr = {1,2,3,4};
    sorttArray(arr);
    for(int i : arr) cout << i << " ";
    return 0;
}