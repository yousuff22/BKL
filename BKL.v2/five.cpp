#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int numRows) {
    
    vector<vector<int>> arr;
    vector<int> temp;

    for(int i = 0; i<numRows; i++) {

        for(int j = 0; j<=i; j++) {
            if(i < 2) {
                temp.push_back(1);
            }
            else if(i > 2) {
                
                if(j == 0 || j == i) {
                    temp.push_back(1);
                }
                else if()
            }
        }
        arr.push_back(temp);
    }
}

int main() {
    generate(5);
    return 0;
}