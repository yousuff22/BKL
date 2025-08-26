#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main() {
    unordered_map<int,int> mpp;
    //<key,value>
    mpp[4] = 5;
    mpp[3] = 2;
    mpp[4]++;
    mpp[1] = 4;
    mpp[9] = 100;

    // It stores data in unordered fashion 
    // for(auto it : mpp) {
    //     cout << it.first <<" " << it.second << endl;
    // }

    int key  = 9;

    if(mpp.find(key) != mpp.end()) cout << " Key Found";

    unordered_map<int,int> umap;

    int arrr[] = {5,7,5,3,1,3,5,1,74,9,6,8};
    //reading
    for(int x : arrr) {
        umap[x]++;
    }
    //writing
    // for(auto it : umap) {
    //     cout << it.first << " " << it.second << endl;
    // }

    unordered_map<int,int> umpp;
    int arr[] = {6,5,3,8,0};
    for(int i = 0; i<5; i++) {
        umpp[arr[i]] = i;
    } 
    
    for(auto itr = umpp.begin(); itr != umpp.end(); itr++) {
        cout << itr->first << " " << itr->second << endl;
    }
    return 0;
}