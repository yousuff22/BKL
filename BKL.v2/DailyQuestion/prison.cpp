#include <bits/stdc++.h>
using namespace std;
vector<int> prisonAfterNDays(vector<int>& cells, int n) {
    
    n = n % 14;
    vector<int> ans(8,0);

    for(int i = 0; i<14; i++) {

        for(int j = 1; j<cells.size()-1; j++) {
            if(cells[j-1] == cells[j+1]) ans[j] = 1;
            else ans[j] = 0;
        }
        cells = ans;
    }
    return ans;
}
int main() {        
    vector<int> arr = {1,1,0,1,1,0,0,1};
    vector<int> output = prisonAfterNDays(arr, 300663720);

    // for(int i : output) cout << i;
    
    cout << 300663720 % 14;
    return 0;
}