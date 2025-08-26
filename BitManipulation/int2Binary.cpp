#include<iostream>
#include<algorithm>
using namespace std;
string convertinbinary(int n) {

    string bi = "";

    while(n != 0) {
        if(n%2 == 1) bi += '0';
        else bi += '1'; 
        n = n/2;
    }
    reverse(bi.begin(), bi.end());
    cout << bi << endl;
}
int main() {
    int n;
    cin >> n;
    convertinbinary(n);
    return 0;
}