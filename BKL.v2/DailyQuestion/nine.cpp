#include <bits/stdc++.h>
using namespace std;

vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
    int n = s.size();
    vector<int> prefix(n, 0);
    vector<int> left(n, -1);   
    vector<int> right(n, -1);  
    vector<int> ans;

    int plates = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') plates++;
        prefix[i] = plates;
    }

    int lastCandle = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '|') lastCandle = i;
        left[i] = lastCandle;
    }

    lastCandle = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '|') lastCandle = i;
        right[i] = lastCandle;
    }

    for (auto& q : queries) {
        int l = right[q[0]]; 
        int r = left[q[1]]; 

        if (l != -1 && r != -1 && l < r) {
            ans.push_back(prefix[r] - prefix[l]);
        } else {
            ans.push_back(0);
        }
    }

    return ans;
}

int main() {
    vector<vector<int>> q = {{1,17},{4,5},{14,17},{5,11}, {15,16}};
    vector<int> ans = platesBetweenCandles("***|**|*****|**||**|*", q);

    for(int i : ans) cout << i << " ";
    cout << endl;
    return 0;
}
