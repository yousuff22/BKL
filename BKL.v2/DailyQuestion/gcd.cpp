#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    int ans = 0;
    for(int i = min(a,b); i > 1; i--) {
        if(a % i == 0 and b % i == 0) {
            ans = i;
            break;
        }
    }

    return ans;
}

int lcm(int a, int b) {
    int g = gcd(a,b);
    cout << "GCD = " << g << endl;
    return g > 0 ? (a * b) / g : 0;
}
int main() {
    cout << lcm(6,2);
    return 0;
}