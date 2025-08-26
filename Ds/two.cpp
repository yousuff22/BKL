#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int marks;

    student(){};

    student(string s, int m) {
        name = s;
        marks = m;
    }

    student(student &s1) {
        marks = s1.marks;
        name = s1.name;
    }

    void display() {
        cout << name << endl;
        cout << marks << endl;
    }
};
int main() {
    student s1("Yousuf",76);
    student s2(s1);
    s2.display();

    return 0;
}