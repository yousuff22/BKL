#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;
vector<string> mostActive(vector<string> customers) {
    unordered_map<string, int> mpp;
    
    for(int i = 0; i<customers.size(); i++) {
        mpp[customers[i]]++;
    }

    priority_queue<string> maxx;

    for(auto it : mpp) {
        float result = 0;

        result = (it.second*100)/customers.size();

        if(result > 5.0) {
            maxx.push(it.first);
        }
    }
    
    while(!maxx.empty()) {
        cout << maxx.top() << endl;
        maxx.pop();
    }
}
int main() {
    vector<string> s = {"bb","bb","ac","bb","zo","zo","ab","bb","ac","bb","bb","ac", "zo", "ab", "bb", "bb","bb","bb","bb","bb","bb","bc","bb","bb","bb","bb"};
    mostActive(s);
    return 0;
}