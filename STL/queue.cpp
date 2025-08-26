#include<iostream>
#include<queue>
using namespace std;
int main(){

        // Last IN First Out

    queue<string> q;

    q.push("Yousuf");
    q.push("Rajahussain");
    q.push("Sayyed");

    cout<<"Top Element : "<<q.front()<<endl;

     q.pop();

    cout<<"Top Element : "<<q.front()<<endl;

    cout<<"Size of Stack :"<<q.size()<<endl;

    cout<<"Empty or Not :"<<q.empty()<<endl;

    return 0;
}