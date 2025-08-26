#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> brr = {1,3,5,7};
    vector<int> arr = {2,4,6,8};
    vector<pair<int,int>> prr;
    for(int i = 0; i<brr.size(); i++) {
        for(int j = 0; j<arr.size(); j++) {
            prr.push_back({brr[i], arr[j]});
        }
    }

    for(int i = 0; i<prr.size(); i++) {
        cout << prr[i].first <<"," << prr[i].second << " " ;
    }
    return 0;
}