#include<iostream>
using namespace std;
void name(int n) {
    if(n == 0) return;
    cout << "Yousuf " << " " ;

    name(--n);
}
int main() {
    int n;
    cin >> n;
    name(n);
    return 0;
}