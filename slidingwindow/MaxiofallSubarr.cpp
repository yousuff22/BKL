#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    int i = 0;
    int j = 0;
    int maxi = 0;
    list<int> ls;
    vector<int> ans;
    while(j < arr.size()) {

        maxi = max(arr[j], maxi);

        if((j-i+1) == k) {
            if(ls.back() <  maxi) {
                ls.push_back(maxi);
                ans.push_back(maxi);
            }
            else if(arr[j] < ls.back()) {
                ls.push_back(ls.back());
                ans.push_back(ls.back());
            }
            else if(arr[j] > ls.back()) {
                ls.push_back(arr[j]);
                ans.push_back(arr[j]);
            }
            else if(arr[i] == ls.back()) {
                maxi = 0;
            }
            i++;
        }

        j++;
    }

    return ans;
}
int main() {
    vector<int> arr = {1,-1};
    vector<int> ans = maxSlidingWindow(arr,1);

    for(int x : ans) {
        cout << x << " ";
    }
    return 0;
}