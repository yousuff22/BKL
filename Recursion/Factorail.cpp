#include<iostream>
using namespace std;
void printt(int x) {
    if(x == 1) { // Base Condition
        return;
    }
    
    int y = printt(x-1);
    
}
int main() {
    int x;
    cin >> x;
    printt(x);
    return 0;
}