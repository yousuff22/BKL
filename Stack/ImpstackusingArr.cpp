#include<iostream>
using namespace std;
class stimp{
    
    int top = -1;
    int arr[10];
    int pop;
    int push;
    int size;

    public:

    void push(int x) {
        top = top + 1;
        arr[top] = x;
    }
    void pop(){
        if(top == -1){};
        top--;
    }
    int size(){
        return top + 1;
    }
    int top() {
        if(top == -1) return -1;
        return arr[top];
    }


};
int main() {
    stimp <int> st;


    return 0;
}