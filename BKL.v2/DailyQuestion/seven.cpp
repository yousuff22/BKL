#include <bits/stdc++.h>
using namespace std;
int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {

    bool flag = false;  
    int ans = 0;

    for(int i = 0; i<fruits.size(); i++) {
        flag = false;
        for(int j = 0; j<baskets.size(); j++) {
            if(fruits[i] <= baskets[j] and baskets[j] != -1) {
                baskets[j] = -1;
                flag = true;
                break;
            }
        }
        if(flag == false) ans++;
    }
    return ans;
}
int main() {
    vector<int> f = {8,5};
    vector<int> b = {1,8};

    cout << numOfUnplacedFruits(f,b);

    return 0;
}