#include<iostream>
#include<vector>
using namespace std;
int firstocc(vector<int>& arr, int k) {
    int left = 0;
    int right = arr.size() - 1;
    int mid = left + (right - left)/2;
    int ans = 0;

    while(left <= right) {
        if(arr[mid] >= k) {
            ans = mid;
            right = mid-1;
        }
        if(arr[mid] < k) {
            left = mid + 1;
        }
        mid = left + (right - left)/2;
    }

    return ans == 0 ? -1 : ans;
}

int lastocc(vector<int>& arr, int k) {
    int left = 0;
    int right = arr.size() - 1;
    int mid = left + (right - left)/2;
    int ans = 0;

    while(left <= right) {
       if(arr[mid] <= k) {
        ans = mid;
        left = mid + 1;
       }

       if(arr[mid] > k) {
        right = mid - 1;
       }
       mid = left + (right - left)/2;
    }
    return ans == 0 ? -1 : ans;
}

vector<int> searchrange(vector<int>& arr, int k) {
    vector<int> ans;

    int first = firstocc(arr,k);
    int last = lastocc(arr,k);

    ans.push_back(first);
    ans.push_back(last);

    return ans;
}
int main() {
    vector<int> arr = {5,7,7,8,8,10};
    vector<int> ans = searchrange(arr,8);

    cout << ans[0];
    cout << ans[1]; 
    return 0;
}