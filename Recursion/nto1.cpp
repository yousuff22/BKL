#include<iostream>
using namespace std;
void reversefahsion(int n) {
    if(n == 1) return;
    n--;
    reversefahsion(n);
    cout << n;

}
int main() {
    int n;
    cin >> n;
    reversefahsion(n);
    return 0;
}