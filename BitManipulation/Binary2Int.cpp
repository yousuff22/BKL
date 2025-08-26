#include<iostream>
using namespace std;
int convertbinarytoInt(string str) {
    int num = 0;
    int p1 = 1;
    for(int i = str.length()-1; i>=0; i--) {
        if(str[i] == '1') num += p1;
        p1 *= 2;
    }
    return num;
}
int main() {
    string str = "1000";
    cout << convertbinarytoInt(str);
    return 0;
}