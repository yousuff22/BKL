// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     cout << " Decimal " <<dec<<showbase<<n<<endl;
//     cout << " Octal " <<oct<<showbase<<n<<endl;
//     cout << " Hexadecimal " <<hex<<showbase<<n<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int a,b;
//     cin >> a >> b;
//     int lcm;
//     if(a > b) lcm = a;
//     else lcm = b;

//     while(1) {
//         if(lcm%a == 0 and lcm%b == 0) {
//             cout << lcm;
//             break;
//         }
//         lcm++;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
// int area(int);
// int area(int,int);
// float area(float);
// float area(float,float);

int area(int s){
    return s*s;
}

int area(int l, int b) {
    return l*b;
}

float area(float r) {
    return (3.14*r*r);
}

float area(float bs, float ht) {
    return (bs*ht)/2;
}

int main() {

    float r = 3.4;
    cout << "square " << area(4) << endl;
    cout << "rectangle " << area(4,3) << endl;
    cout << "Circle " << area(r) << endl;
    cout << "Triangle "<< area(3,2);
    return 0;
}
