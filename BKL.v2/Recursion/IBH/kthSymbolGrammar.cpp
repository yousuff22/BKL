#include <bits/stdc++.h>
using namespace std;
int kthSymbolGrammar(int n, int k) {
    if(n == 1 and k == 1) return 0;

    int mid = pow(2, n-1)/2;

    if(k <= mid) {
        return kthSymbolGrammar(n-1, k);
    }
    else {
        return !kthSymbolGrammar(n-1,k-mid);
    }
}
int main() {
    cout << kthSymbolGrammar(4,5);
    
    return 0;
}