#include <iostream>
using namespace std;

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int g = gcd(a, b);
    long long lcm = (1LL * a * b) / g;

    cout << "LCM of " << a << " and " << b << " is " << lcm << endl;
    return 0;
}
