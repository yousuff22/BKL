#include <bits/stdc++.h>
using namespace std;
void permutationSpace(string ip, string op) {
    
    if(ip.size() == 0) {
        cout << op << endl;
        return;
    }

    string op1 = op;
    string op2 = op;

    op1.push_back(ip[0]);
    op2.push_back('_');
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);

    permutationSpace(ip, op1);
    permutationSpace(ip, op2);


}
int main() {
    string ip = "BC";
    string op = "A";

    permutationSpace(ip, op);

    return 0;
}