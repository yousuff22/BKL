#include <bits/stdc++.h>
using namespace std;
void insertInStack(stack<int>& st, int temp) {

    // Base Condition
    if(st.size() == 0 || st.top() <= temp) {
        st.push(temp);
        return;
    }

    int LastEle = st.top();
    st.pop();
    
    // Hypothesis
    insertInStack(st,temp);
    
    // Induction
    st.push(LastEle);
}

void sorttStack(stack<int>& st) {
    
    // Base Condition
    if(st.empty()) return;

    int lastEle = st.top();
    st.pop();
    
    // Hypothesis
    sorttStack(st);

    // Induction
    insertInStack(st,lastEle);

}
int main() {
    stack<int> st;
    st.push(5);
    st.push(0);
    st.push(2);
    st.push(1);
    st.push(16);
    st.push(7);
    st.push(5);
    st.push(8);
    st.push(9);

    sorttStack(st);
    cout << st.top();
    return 0;
}