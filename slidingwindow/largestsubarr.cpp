#include<iostream>
#include<vector>
using namespace std;
int len(vector<int>& arr, int k) {
    int i = 0; 
    int j = 0;
    int sum = 0;
    int len = 0;
    int ans = 0;
    while(j < arr.size()) {
        sum += arr[j];

        if(sum == k) {
            len = j-i+1;
            ans = max(len,ans);
        }
        else if(sum > k) {
            sum -= arr[i++];
        }
        j++;
    }

    cout << ans;
}
int main() {
    vector<int> arr = {3,2,4,5,1,1,1,2,3,3};
    len(arr,5);
    return 0;
} 