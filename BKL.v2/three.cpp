#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;

        int cnt = 1;

        int currentMAX = INT_MIN;
        int prev = 0;

        int ans = INT_MIN;

        for(int i = 0; i<nums.size(); i++) {

            if(currentMAX < nums[i]) {
                currentMAX = nums[i];
                cnt = 1;
            }

            else if(prev == nums[i] and currentMAX < nums[i]) {
                cnt++;
            }

            else if(currentMAX > nums[i]) {
                prev = nums[i];
                cnt = 1;
            }
            prev = nums[i];
        }
        return cnt;
    }
int main() {
    vector<int> nums = {1,2,3,3,2,2};

    cout << longestSubarray(nums);
    
    return 0;
}
