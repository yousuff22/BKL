#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr1[] = {2,6,4};
    int arr2[] = {9,7,5};
    int n = sizeof(arr1) / 4;

        sort(arr1 , arr1 + n);
        sort(arr2 , arr2+ n);
        
        int x;
    
        cout << arr2[0] - arr1[0];
}
