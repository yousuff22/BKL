#include<iostream>
#include<stack>
using namespace std;
bool isvalid(string s) {
    stack<char> st;
    for(int i = 0; i<s.size(); i++) {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        }
        else {
            if(st.empty()) return false;
            char top = st.top();
            st.pop();
            if(s[i] == ')' and top == '(' || s[i] == '}' and top == '{' || s[i] == ']' and top == '['){}
            else return false;
        }
    }

    if(st.empty()) return true;
}
int main() {
    string s = "(()])";
    cout << isvalid(s);
    return 0;
}