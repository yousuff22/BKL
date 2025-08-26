#include<iostream>
#include<unordered_map>
using namespace std;
int cntOccuOfangram(string s,string a) {

    int i = 0;
    int j = 0;
    int cnt = 0;

    int ans = 0;
    unordered_map<char,int> mpp;
    for(char ch : a) {
        mpp[ch]++;
    }

    while(j < s.size()) {
        if((j-i+1) < a.size()) {
            if(s[i] == mpp[s[i]]) {
                mpp[s[i]]--;
            }
            j++;
        }

    }
    
}
int main() {
    cntOccuOfangram("aabaabaa", "aaba");
    return 0;
}