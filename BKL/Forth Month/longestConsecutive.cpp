#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
int longestConsecutive(vector<int>& nums) {
   
    sort(nums.begin(), nums.end());
    int cnt = 1;
    int lastsmaller = INT16_MIN;
    int maxx = INT16_MIN;

    for(int i = 0; i<nums.size() - 1; i++) {
        if(nums[i] - 1 == lastsmaller) {
            cnt++;
            lastsmaller = nums[i];
        }
        else if(nums[i] - 1 != lastsmaller) {
            cnt = 1;
            lastsmaller = nums[i];
        }
        maxx = max(maxx,cnt);
    }

    return maxx;    
}
int main() {
    vector<int> arr = {0,3,7,2,5,8,4,6,0,1};
    cout << longestConsecutive(arr);
    return 0;
}