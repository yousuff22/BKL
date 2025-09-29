#include <bits/stdc++.h>
using namespace std;
vector<int> prisonAfterNDays(vector<int>& cells, int n) {
    
    vector<int> ans(8,0);

    for(int i = 1; i<=28; i++) {

        if(1) {
            if(cells[0] == cells[2]) ans[1] = 1;
            else ans[1] = 0;
        }

        if(1) {
            if(cells[1] == cells[3]) ans[2] = 1;
            else ans[2] = 0;
        }
        
        if(1) {
            if(cells[2] == cells[4]) ans[3] = 1;
            else ans[3] = 0;
        }
        
        if(1) {
            if(cells[3] == cells[5]) ans[4] = 1;
            else ans[4] = 0;
        }
        
        if(1) {
            if(cells[4] == cells[6]) ans[5] = 1;
            else ans[5] = 0;
        }
        
        if(1) {
            if(cells[5] == cells[7]) ans[6] = 1;
            else ans[6] = 0;
        }
        for(int i : ans) cout << i << " ";
        cout << endl; 
        cells = ans;
    }
    return ans;
}
// 0,0,1,0,0,1,1,0
int main() {        
    vector<int> arr = {1,1,0,1,1,0,0,1};
    vector<int> output = prisonAfterNDays(arr, 300663720);

    cout << 7 % 14;
    return 0;
}