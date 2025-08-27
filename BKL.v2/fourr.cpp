#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<climits>

using namespace std;
int minPairSum(vector<int>& nums) {
    int left = 0;
    int right = nums.size()-1;
    int ans = INT_MIN;

    sort(nums.begin(), nums.end());

    for(int i = 0; i<nums.size()/2; i++) {
        ans = max(ans, (nums[left] + nums[right]));

        left++;
        right--;
    }

    return ans;
}

int main() {
    vector<int> arr = {3,5,4,2,4,6};

    cout << minPairSum(arr);
    return 0;
}