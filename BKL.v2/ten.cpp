#include <bits/stdc++.h>
using namespace std;
int maximumCandies(vector<int>& candies, long long k) {
    int highest = INT_MIN;
    int smallest = INT_MAX;
    int sum = 0;
    int ans = 0;

    for(int i : candies) {
        if(i < smallest) {
            smallest = i;
        }
        if(i > highest) {
            highest = i;
        }
    }

    int left = 1;
    int right = highest;

    int mid;
    while(left <= right) {
        mid = left + (right - left)/2;
        long long kid = 0;

        for(int i = 0; i<candies.size(); i++) {
            kid += (int)candies[i]/mid;
        }
        if(k > kid) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
            ans = mid;
        }
    }

    return mid;
}
int main() {
    vector<int> arr = {5,8,6};
    cout << maximumCandies(arr,3);

    return 0;
}