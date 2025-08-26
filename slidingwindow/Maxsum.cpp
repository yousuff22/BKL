#include<iostream>
#include<vector>
using namespace std;
int maxsum(vector<int>& arr, int k) {
    int i = 0;
    int j = 0;
    int sum = 0;
    int ans = 0;
    while(j < arr.size()) {
        sum += arr[j];

        if((j-i + 1) == k) {
            ans = max(sum,ans);
            sum -= arr[i++];
        }
        j++;
    }
    cout << ans;
}
int main() {
    vector<int> arr = {3,4,9,7,2,1};
    maxsum(arr,2);
    return 0;
}