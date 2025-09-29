#include <bits/stdc++.h>
using namespace std;
set<string> s;
void permutationWithDigits(string ip, string op) {
    if(ip.size() == 0) {
        cout << op << endl;
        return;
    }

    string op1 = op;
    string op2 = op;

    if(isdigit(ip[0])) {
        op1.push_back(ip[0]); 

        ip.erase(ip.begin() + 0);
        permutationWithDigits(ip, op1);

    }
    else {
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));

        ip.erase(ip.begin() + 0);

        permutationWithDigits(ip, op1);
        permutationWithDigits(ip, op2); 
    }

    return;
}
int main() {
    string ip = "a1b2";
    string op = "";

    permutationWithDigits(ip, op);
 
    for(string x : s) cout << x << " ";
    return 0;
}