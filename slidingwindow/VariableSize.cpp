#include<iostream>
#include<vector>
using namespace std;
int maxsize(vector<int>& arr, int k) {
    int i = 0;
    int j = 0;

    int sum = 0;
    int ans = 0;

    while(j < arr.size()) {
        sum += arr[j];

        if(sum > k) {
            sum -= arr[i++];
        }
        else if(sum == k) {
            ans = max((j-i+1) ,ans);
        }
        j++;
    }
    cout << ans;
}
int main() {
    vector<int> arr = {4,1,1,1,2,3,5};
    maxsize(arr,7);
    return 0;
}