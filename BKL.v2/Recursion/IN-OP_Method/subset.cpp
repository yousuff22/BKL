#include <bits/stdc++.h>
using namespace std;
set<string> s;
void subset(string ip, string op) {
    if(ip.size() == 0) {
        s.insert(op);
        return;
    }

    string op1 = op;
    string op2 = op;

    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);

    subset(op1, ip);
    subset(op2, ip);

    return;
}

int main() {
    string ip = "ab";
    string op = "";

    subset(ip, op);
    return 0;
}