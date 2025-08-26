#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& arr) {
    int sum = 0;
    int sumofN = 0;
    int maxx = arr.size();

    for(int i = 0; i<arr.size(); i++) {
        sum += arr[i];
    }

    sumofN = maxx * (maxx+1)/2;
    return (sumofN - sum);
}
int main() {
    vector<int> arr = {3,0,1};
    cout << missingNumber(arr);
    return 0;
}