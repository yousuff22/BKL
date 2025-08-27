#include <bits/stdc++.h>
using namespace std;
void deleteMiddle(stack<int>& st, int k) { 

    if(k == 1) {
        st.pop();
        return;
    }

    int val = st.top();
    st.pop();
    deleteMiddle(st, k-1);

    st.push(val);

}
int main() {
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    deleteMiddle(st,3);

    while (!st.empty()) {
        cout << st.top() << " ";

        st.pop();
    }
    
    return 0;
}