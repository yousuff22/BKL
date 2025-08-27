#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> dailyTemperatures(vector<int>& temperatures) {

    stack<int> st;
    vector<int> ans(temperatures.size(), 0);

    for(int i = temperatures.size()-1; i >= 0; i--) {
        
        while(!st.empty() and temperatures[st.top()] <= temperatures[i]) {
            st.pop();    
        }
    
        if(!st.empty()) {
            ans[i] = st.top() - i;
        }
        st.push(i);
    }
    return ans;
}

int main() {
    vector<int> arr = {73,74,75,71,69,72,76,73};
    vector<int> ans = dailyTemperatures(arr);

    for(int i : ans) cout << i << " " ;
    return 0;
}