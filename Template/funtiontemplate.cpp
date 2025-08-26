// #include<iostream>
// using namespace std;

// // Function Template with multiply Parameter
// template <class T1, class T2>
// float avgFucn(T1 a, T2 b) {
//     float avg = (a+b)/2.0;
//     return avg;
// }

// int main() {
//     float ans = avgFucn(5.4,3);
//     cout << ans << endl;

//     return 0;
// }

#include<iostream>
using namespace std;

template <typename T>
void swapp(T x, T y) {
    T temp = x;
    x = y;
    y = temp;

    cout << x << endl;
    cout << y << endl;
}

int main() {
    
    swapp('c','g');

    return 0;
}

