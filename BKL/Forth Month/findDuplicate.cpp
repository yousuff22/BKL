#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>& nums) {
    int low = 1;
    int high = nums.size()-1;      

    while(low <= high) {
        int mid = (low+high)/2;
        int cnt = 0;

        for(int i : nums) {
            if(i <= mid) cnt++;
        }
        if(cnt <= mid) low = mid+1;
        else high = mid-1;
    }  
    return low;
}
int main() {
    vector<int> arr = {1,3,4,2,2};
    cout << findDuplicate(arr);

    return 0;
}