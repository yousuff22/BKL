
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector <int> arr = {9,9};

        int n = arr.size();

        if(arr[n-1] != 9) {
            arr[n-1] = arr[n-1] + 1;
        }
        
        else{
            arr[n-1] =  1;
            arr.push_back(0);
        } 
        
        for(int x:arr) {
            cout<<x << " ";
        }

    return 0;
}