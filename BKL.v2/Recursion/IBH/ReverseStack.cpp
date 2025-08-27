#include <bits/stdc++.h>
using namespace std;
void insertAtLast(stack<int>& st, int temp) {
    if(st.empty()) {
        st.push(temp);
        return;
    }

    int val = st.top();
    st.pop();

    insertAtLast(st,temp);

    st.push(val);

    return;
}
void reverseStack(stack<int>& st) {
    
    if(st.size() == 1) {
        return;
    }

    int val = st.top();
    st.pop();

    reverseStack(st);

    insertAtLast(st, val);

    return;
}

int main() {
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    reverseStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";

        st.pop();
    }
    return 0;
}