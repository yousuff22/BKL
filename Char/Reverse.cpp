#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
    void reverse(char str[],int n){
        int low = 0;
        int high = n-1;
        while(low < high){
            int temp = str[low];
            str[low ]= str[high];
            str[high] = temp;
            low++;
            high--;
        }
    }
int main(){

    char str[20];
    cin >> str;

    int n = strlen(str);
   reverse(str,n);

   cout<<str;
    return 0;
}