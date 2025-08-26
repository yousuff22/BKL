#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<int> firstneg(vector<int>& arr, int k) {
    vector<int> ans;
    list<int> ls;

    int i = 0;
    int j = 0;
    
    while(j < arr.size()) {

        if((j-i+1) == k) {
            ans.push_back(ls.front());
            if(ls.size() == 0) {
                ans.push_back(0);
            }
            else if(arr[i] == ls.front()) {
                ls.pop_front();
            }
            i++;
        }

        else if((j-i+1) < k) {
            j++;
            if(arr[j] < 0) {
                ls.push_back(arr[j]);
            }
        }
    }

    for(int i : ans) {
        cout << i << " ";
    }
}
int main() {
    vector<int> arr = {12,-1,-7,8,-15,30,16,28};
    firstneg(arr,3);
    return 0;
}