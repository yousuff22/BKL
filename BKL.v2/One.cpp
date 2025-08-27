#include<iostream>
#include<vector>
using namespace std;
int countMaxOrSubsets(vector<int>& nums) {
    int maxOR = nums[0];

    int maxORCnt;
    int cnt = 0;

    for(int i = 1; i<nums.size(); i++) {
        maxOR |= nums[i];
    }

    for(int i = 0; i<nums.size(); i++) {
        maxORCnt = 0;
        for(int j = i; j<nums.size(); j++) {
            maxORCnt |= nums[j];
            if(maxOR == maxORCnt) {
                cnt++;
            }
        }
    }    

    return cnt;
}
int main() {
    vector<int> arr = {3,1,4,2};
    cout << countMaxOrSubsets(arr);
    return 0;
}