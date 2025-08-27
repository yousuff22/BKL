#include <bits/stdc++.h>
using namespace std;
vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {

    vector<int> prefixSum(s.size(), -1);
    vector<int> ans;
    bool flag = false;

    bool lFlag = true;
    bool rFlag = true;

    int cnt = 0;
    for(int i = 0; i<s.size(); i++) {
        if(flag and s[i] == '*') cnt++;
        if(s[i] == '|') {
            prefixSum[i] = cnt;
            flag = true;
        }
    }

    for(int i = 0; i<queries.size(); i++) {
        int l = queries[i][0];
        int r =  queries[i][1];

        // bool lFlag = true;
        // bool rFlag = true;  

        while((rFlag == true && lFlag == true ) && (l < r)) {
            
            if(prefixSum[l] < 0) { 
                l++; 
            }
            else lFlag = false;
            
            if(prefixSum[r] < 0) {
                r--;
            }
            else rFlag = false;
        }    
        if(l == r) ans.push_back(0);
        else ans.push_back(prefixSum[r] - prefixSum[l]);

    }
    return ans;
}
int main() {
    vector<vector<int>> q = {{2,33},{2,32},{3,31},{0,33},{1,24},{3,20},{7,11},{5,32},{2,31},{5,31},{0,31},{3,28},{4,33},{6,29},{2,30},{2,28},{1,30},{1,33},{4,32},{5,30},{4,23},{0,30},{3,10},{5,28},{0,28},{4,28},{3,33},{0,27}};
    vector<int> ans = platesBetweenCandles("*|*||||**|||||||*||*||*||**|*|*||*", q);

    for(int i : ans) cout << i << " ";
    return 0;
}