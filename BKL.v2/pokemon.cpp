#include <bits/stdc++.h>
using namespace std;
long long zeroFilledSubarray(vector<int>& nums) {

    long long cnt = 0;
    int ans = 1;
    int prev = -1;

    for(int i = 0; i<nums.size(); i++) {
        if(prev != 0) ans = 1;
        if(nums[i] == 0) {
            cnt++;
            if(prev == 0) {
                cnt += ans;
                ans++;
            } 
        }
        prev = nums[i];
    }
    return cnt;
}
int main() {
    vector<int> arr = {0,0,0,0,0};
    cout << zeroFilledSubarray(arr);
    return 0;
}