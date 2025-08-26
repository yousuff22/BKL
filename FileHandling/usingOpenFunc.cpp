#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ofstream write;
    write.open("text.txt");
    write << "Hey I am a file which was created using Open Funtion ";
    write << "Second file";
    write.close();


    string str;
    ifstream read;
    read.open("text.txt");
    getline(read,str);

    cout << str;
    read.close(); 
    return 0;
}