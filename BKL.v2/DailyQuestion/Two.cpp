#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int>& nums) {
    int n = nums.size();
    int total = 1 << n; // 2^n subsets

    for (int mask = 0; mask < total; ++mask) {
        vector<int> subset;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                subset.push_back(nums[i]);
            }
        }

        // Print the subset
        cout << "{ ";
        for (int num : subset)
            cout << num << " ";
        cout << "}" << endl;
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    generateSubsets(nums);
    return 0;
}
