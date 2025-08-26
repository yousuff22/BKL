#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool palindrome(char str[], int n){
    int low = 0;
    int high = n-1;
    while(low <= high){
        if(str[low] == str[high]){
            return true;
        }
        low++;
        high--;
    }
    return false;
}
int main(){
    char str[20];
    cin>>str;
    int n = strlen(str);
    palindrome(str,n);

    if(palindrome){
        cout<<" :) ";
    }
    else{
        cout<<" :(";
    }
    return 0;
}