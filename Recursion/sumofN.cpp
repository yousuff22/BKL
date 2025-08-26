#include<iostream>
using namespace std;
int sum = 0;
void sumofN(int n, int summ) {
    if(n < 1) {
        cout << summ;
        return;
    }

    sumofN(n-1,summ+n);

}   
int main() {    
    int n;
    int summ = 0;
    cin >> n;
    sumofN(n,0);

    return 0;
}