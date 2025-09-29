#include <bits/stdc++.h>
using namespace std;
int maxFreqSum(string s) {
        unordered_map<char,int> mpp;
        unordered_map<char,int> mpp2;

        int vowel = 0;
        int consonants = 0;

        for(int i : s) {
            if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
                mpp[i]++;
            }
            else {
                mpp2[i]++;
            }
        }

        for(auto it : mpp) {
            if(it.second > vowel) {
                vowel = it.second;
            }
        }

        for(auto it : mpp2) {
            if(it.second > consonants) {
                consonants = it.second;
            }
        }

        return vowel+consonants;
    }
int main() {    
    cout << maxFreqSum("successes");
    return 0;
}