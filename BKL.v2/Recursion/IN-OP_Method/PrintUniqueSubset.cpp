#include <bits/stdc++.h>
using namespace std;
set<string> s;

void PrintUniqueSubset(string ip, string op) {

    if(ip.size() == 0) {
        s.insert(op);
        return;
    }

    string op1 = op;
    string op2 = op;

    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);

    PrintUniqueSubset(ip,op1);
    PrintUniqueSubset(ip,op2);

    return;
}
int main() {

    string ip = "aab";
    string op = "";
    
    PrintUniqueSubset(ip, op);

    for(string i : s) cout << i << " ";
    return 0;
}