#include<iostream>
#include<fstream>
using namespace std;
int main() {
    // For writing purpose ... 

    ofstream write("text.txt");
    write << "My name is yousuf" << " ";
    write << "Hey bro" << endl;

    // If the file is already created/exist ...

    string str;
    ifstream read("text.txt");
    getline(read,str);

    cout << str;
    return 0;
}