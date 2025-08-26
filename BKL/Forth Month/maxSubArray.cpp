#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
    if(nums.size() == 1 and nums[0] > 0) return nums[0];
    if(nums.size() == 1 and nums[0] < 0) return -1;

    long long sum = 0;
    long long maxx = INT16_MAX;

    for(int i = 0; i<nums.size(); i++) {
        sum += nums[i];
        maxx = max(maxx,sum);
        if(sum < 0) {
            sum = 0;
        }
    }        
    return maxx;
}
int main() {
    vector<int> arr = {-2,-1};
    cout << maxSubArray(arr);
    return  0;
}