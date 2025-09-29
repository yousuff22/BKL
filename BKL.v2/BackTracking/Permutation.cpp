#include <bits/stdc++.h>
using namespace std;
void solve(string op, string ip) {
    
    if(ip.size() == 0) {
        cout << op << endl;
        return;
    }
    
    set<char> ss;
    for(int i = 0; i<ip.size(); i++) {
        if(ss.find(ip[i]) == ss.end()) {
            string newOP = op + ip[i];
            string newIP = ip.substr(0,i) + ip.substr(i+1);
            
            solve(newOP, newIP);
            ss.insert(ip[i]);
        }
    }
    return;
}
void permutation (string s) {
    solve("", s);
}
int main() {
    permutation("aab");
    return 0;
}