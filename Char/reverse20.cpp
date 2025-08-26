#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;

    int rev = 0;
    if(x > 0){
        while(x > 0){
            int ld = x%10;
            rev = rev*10;
            rev = ld + rev;
            x = x/10;    
        }
        cout<<rev;
    }
    else{
        x = x * -1;
        while(x > 0){
            int ld = x%10;
            rev = rev*10;
            rev = ld + rev;
            x = x/10;    
        }
    cout<<rev * -1;
    }

    return 0;
}