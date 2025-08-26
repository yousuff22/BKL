#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[] = {2,5,1,16,10};
    int n = sizeof(arr) / 4;

    int l = 0;
    int r = 0;
    int sum = 0;
    int len = 0;

    int k = 14;
    while(r < n) {
        sum = sum + arr[r];

        if(sum > k) {
            sum = sum - arr[l];
            l = l+1;
        }
            
        if(sum <= k) {
            len = max(len, r - l + 1);
            r = r+1;
        }   
    }

    cout << len << endl;
    return 0;
}