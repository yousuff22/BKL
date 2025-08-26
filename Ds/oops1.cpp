#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class student {
    public:
    int age;
    string firstname;
    string lastname;
    int standard;
    
    void get_age(int a) {
        age = a;
    }
    void get_first_name(string fn) {
        firstname = fn;
    }
    void get_last_name(string ln) {
        lastname = ln;
    }
    void get_standard(int s) {
        standard = s;
    }
    
    int set_age() {
        return age;
    }
    
    string set_first_name() {
        return firstname;
    }
    
    string set_last_name() {
        return lastname;
    }
    
    int set_standard() {
        return  standard;
    }
};
int main() {
     student s1;
     
     int a;
     cin >> a;
     string ls,fn;
     cin >> ls >> fn;
     int s;
     cin >> s;
        
    s1.get_age(a);
    s1.get_first_name(fn);
    s1.get_last_name(ls);
    s1.get_standard(s);
    
    cout << s1.set_age() << endl;
    cout << s1.set_first_name() << ", ";
    cout << s1.set_last_name() << endl;
    cout << s1.set_standard();
    
    cout << endl;
    cout << endl;
    
    cout << s1.set_age() << ",";
    cout << s1.set_last_name() << ",";
    cout << s1.set_first_name() << ",";
    cout << s1.set_standard();
    
    return 0;
}
