#include <bits/stdc++.h>
using namespace std;
string largestGoodInteger(string num) {

    int cnt = 1;
    char lastNum = num[0];
    char maxx = '\0';
    int index = -1;
    
    for(int i = 1; i<num.size(); i++) {
        if(lastNum == num[i]) {
            cnt++;
            if(cnt == 3) {
                if(lastNum > maxx) {
                    maxx = lastNum;
                    index = i;
                }
            } 
        }
        else {
            cnt = 1;
            lastNum = num[i];
        }
    }
    
    if(index >= 2) {
        return num.substr(index - 2, 3);
    }

    return "";
}
int main() {

    cout << largestGoodInteger("42352338");    

    return 0;
}