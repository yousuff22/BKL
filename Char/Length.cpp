#include<iostream>
using namespace std;
int length(char name[]){
    int cnt = 0;
    for(int i=0; name[i] != '\0'; i++){
        cnt++;
    }
    return cnt;
}
int main(){
    char name[20];

    cin >> name;
    
    cout<< length(name);
    return 0;
}