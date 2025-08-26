#include<iostream>
using namespace std;
void printt(int x) {
    if(x == 0) { // Base Condition
        return;
    }
    cout << x; // Hypothesis
    printt(x-1); // Induction
}
int main() {
    int x;
    cin >> x;
    printt(x);
    return 0;
}