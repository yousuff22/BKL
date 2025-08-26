#include<iostream>
using namespace std;
class Myclass {
    public:
    int x;
    static int cnt;

    Myclass() {
        cnt++;
    }
    static int getcnt(void) {
        return cnt;
    }
};

int Myclass::cnt = 0;
int main() {    
    cout << "Cnt before object created : " << Myclass::cnt << endl;
    Myclass obj1;
    cout << "Cnt after object created : " << Myclass::cnt << endl;
    cout << obj1.getcnt;
    return 0;
}