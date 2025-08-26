#include<iostream>
int size = 5;
using namespace std;
class dequeee{
    public:
    int a[n];
    int front;
    int back;

    dequeee() {
        front = -1;
        back = -1;
    }

    void addfromfront(int item) {
        if(front == 0 and back == n-1) {
            cout << "Over Flow " << endl;
        }
        else if(front == -1 and back == -1) {
            front = 0;
            back = 0;
        }
        else if(front == 0) {
            return;
        }
        else{
            front--;
        }
        a[front] = item;
    }

    void addfromend(int item) {
        if(front == 0 and back == n-1) {
            cout << "overflow" << endl;
        }
        if(front == -1) {
            front = 0;
            back = 0;
        }
        else {
            back++;
        }
        a[back] = item;
    }   
};
int main() {
    return 0;
}