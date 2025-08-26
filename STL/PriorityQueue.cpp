#include<iostream>
#include<queue>
using namespace std;
int main(){

    //max heap
    priority_queue<int> maxx;

    //min heap
    priority_queue<int,vector<int> , greater<int> > mini;

    maxx.push(1);
    maxx.push(3);
    maxx.push(0);
    maxx.push(2);

    int n = maxx.size();

    for(int i= 0; i<n; i++){
        cout<<maxx.top()<<" ";
        maxx.pop();
    }cout<<endl;

    mini.push(2);
    mini.push(1);
    mini.push(4);
    mini.push(0);

    int m = mini.size();

    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"Empty Hai Kya?? "<<mini.empty();

    return 0;
}