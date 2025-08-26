#include<iostream>
#include<vector>
using namespace std;
int maxprofit(vector<int>& arr) {
    int buy = arr[0];
    int profit = 0;
    int maxx = INT16_MIN;

    for(int i = 0; i<arr.size()-1; i++) {
        if(buy > arr[i]) {
            buy = arr[i];
        }
        else {
            profit = arr[i] - buy;
            maxx = max(maxx,profit);
            profit = 0;
        }
    }
    return maxx;
}
int main() {
    vector<int> arr = {7,6,4,3,1};
    cout << maxprofit(arr);
    return 0;
}