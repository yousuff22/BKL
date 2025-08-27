#include <bits/stdc++.h>
using namespace std;
void TowerOFHanoi(int s, int d, int h, int n, int& cnt) {
    cnt++;
    if(n == 1) {
        cout << "Moving plate n from " << s << "to " << d << endl;
        return;
    }   

    TowerOFHanoi(s,h, d, n-1, cnt);
    cout << "Moving plate n from " << s << "to " << d << endl;
    TowerOFHanoi(h,d, s, n-1, cnt);

    return;
}
int main() {
    int cnt = 0;
    TowerOFHanoi(1,3,2, 20, cnt);

    cout << cnt;
    return 0;
}