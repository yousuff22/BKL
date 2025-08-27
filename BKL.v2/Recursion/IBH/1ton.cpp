#include <bits/stdc++.h>
using namespace std;
void printt1(int x) {
    if(x == 0) return;

    printt1(x-1);
    cout << x;
}

void printt2(int x) {
    if(x == 0) return;

    cout << x;
    printt2(x-1);
}

int factorail(int x) {
    if(x == 1) return 1;

    return x * factorail(x-1);
}

int main() {    
    // printt2(3);
    cout << factorail(5);
    return 0;
}