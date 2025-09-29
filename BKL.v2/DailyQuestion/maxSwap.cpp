#include <bits/stdc++.h>
using namespace std;
int max(int x) {
    int swap = 0;
    int firstSmall = INT_MAX;
    string num = to_string(x);

    for(int i = 0; i<num.size(); i++) {
        if(firstSmall > int(num[i])) {
            firstSmall = i;
        }
    }


    return firstSmall;
}
int main() {
    cout << max(2193);
    return 0;
}