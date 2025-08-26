#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int lengthOfLongestSubstring(string s) {
    unordered_map<char,int> mpp;

    int i = 0;
    int j = 0;
    int ans = INT16_MIN;

    while(j < s.size()) {
        mpp[s[j]]++;

        if(mpp.size() == (j-i+1)) {
            ans = max(ans, (j-i+1));
        }

        while((j-i+1) > mpp.size()) {
            mpp[s[i]]--;
            if(mpp[s[i]] == 0) {
                mpp.erase(s[i]);
            }
            i++;
        }
        j++;
    }
    return ans;
}

int longestOnes(vector<int>& nums, int k) {
    int i = 0;
    int j = 0;
    int ans = 0;
    int sum = 0;

    while(j < nums.size()) {
        sum += nums[j];

        if(((j-i+1) - sum) <= k) {
            ans = max(ans,(j-i+1));
        }

        while(((j-i+1)-sum) > k) {
            sum = sum - nums[i];
            i++;
        }
        j++;
    }
    return ans;
}

int main() {
    string s = "abcabcbb";
    vector<int> arr = {1,1,1,0,0,0,1,1,1,1,0};
    cout << longestOnes(arr,2);
    return 0;
}