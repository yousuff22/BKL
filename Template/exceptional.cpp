#include<iostream>
using namespace std;
int main() {
    int numerator;
    int demominator;

    cout << "Enter Numerator  ";
    cin >> numerator;
    cout << "Enter demominator  ";
    cin >> demominator;

    int result = 0;
    try{
        if(demominator == 0) {
            throw demominator;
        }
        result = numerator/demominator;
    }
    catch(int ex) {
        cout << "Exception : Divide by zero not allowed : " << endl;    
    }

    cout << "The Division is : " << result;    

    return 0;
}

