#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    int ans = 0;
    for(int i = min(a,b); i > 1; i--) {
        if(a % i == 0 and b % i == 0) {
            ans = i;
            break;
        }
    }

    return ans;
}
int lcm(int a, int b) {
    int g = gcd(a,b);
    cout << "GCD = " << g << endl;
    return g > 0 ? (a * b) / g : 0;
}
vector<int> replaceNonCoprimes(vector<int>& nums) {
    vector<int> ans;
    stack<int> st;

    for(int i : nums) {
        st.push(i);
    }
    int lcmAns;
    while(!st.empty()) {
        int firstInt = st.top();
        st.pop();
        if(gcd(firstInt, st.top()) > 0) {
            lcmAns = lcm(firstInt, st.top());
            ans.push_back(lcmAns);
            st.pop();
        } 
        else {
            st.pop();
        }
        while(gcd(lcmAns,st.top()) > 0) {
            lcmAns = lcm(firstInt, st.top());
            ans.push_back(lcmAns);
            st.pop();
        } 
        st.pop();    
    }

    return ans;
}

int main() {
    vector<int> arr = {6,4,3,2,7,6,2};
    vector <int> ans = replaceNonCoprimes(arr);

    for(int i : ans) cout << i << " ";
    return 0;
}