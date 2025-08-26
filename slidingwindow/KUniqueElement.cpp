#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int kuniqueEle(string s, int k) {
    unordered_map<char,int> mpp;

    int i = 0;
    int j = 0;

    int ans = INT16_MIN;
    while(j < s.size()) {
        mpp[s[j]]++;
        if(mpp.size() < k) {
        }
        else if(mpp.size() == k) {
            // Calculation
            ans = max(ans,j-i+1);
        }
        while(mpp.size() > k) {
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
int main() {
    string s = "aabacbebebe";
    cout << kuniqueEle(s,3);
    return 0;
}