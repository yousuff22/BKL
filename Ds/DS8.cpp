#include <iostream>
using namespace std;

void move(int n, char tower1, char tower2, char tower3) {
    if (n == 1) {
        cout << "Move disk from " << tower1 << " to " << tower3 << endl;
    } else {
        move(n - 1, tower1, tower3, tower2); 
        cout << "Move disk from " << tower1 << " to " << tower3 << endl;
        move(n - 1, tower2, tower1, tower3);
    }
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    move(n, 'A', 'B', 'C');
    return 0;
}
