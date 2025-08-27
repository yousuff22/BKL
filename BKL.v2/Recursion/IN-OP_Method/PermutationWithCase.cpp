#include <bits/stdc++.h>
using namespace std;
void permutationWithCase(string ip, string op) {

    if(ip.size() == 0) {
        cout << op << endl;
        return;
    }

    string op1 = op;
    string op2 = op;

    op1.push_back(ip[0]);
    op2.push_back(toupper(ip[0]));
    ip.erase(ip.begin() + 0);

    permutationWithCase(ip, op1);
    permutationWithCase(ip, op2);

    return;
}
int main() {
    string ip = "ab";
    string op = "";

    permutationWithCase(ip, op);
    return 0;   
}