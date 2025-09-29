#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
void solve(int open, int close, string s) {

    if(open == 0 and close == 0) {
        ans.push_back(s);
        return ;
    }

    if (open > 0) {
        solve(open - 1, close, s + '(');
    }

    if (close > open) {
        solve(open, close - 1, s + ')');
    }

    return;
}
vector<string> generatedParanthesis(int n) {
    string s;
    solve(n, n, s);

    return ans;
}
int main() {
    int n = 0;
    cout << "Enter N: ";
    cin >> n;
    vector<string> ans = generatedParanthesis(n);

    for(string s: ans) cout << s << " ";
    return 0;
}