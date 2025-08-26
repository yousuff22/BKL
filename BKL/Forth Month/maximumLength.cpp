#include<iostream>
#include<unordered_map>
using namespace std;
int maximumLength(string s) {
    int i = 0;
    int j = 0;
    int ans = -1;
    unordered_map<int,int> mpp;

    while(j < s.size()) {
        mpp[s[j]]++;

        if(mpp.size()) {
            if(mpp[s[j]] > 2) {
                ans = mpp[s[j]];
            }
        } 
        j++;
    }
    if(ans == -1) return ans;
    if(ans % 2 == 0) return (ans/2);
    else return (ans/3);
}
int main() {
    string s = "abcccccdddd";
    cout << maximumLength(s);
    return 0;
}