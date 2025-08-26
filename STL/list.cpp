#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    list<int>l2(5,100);

    list<int>l3(l2);    //new list coping l2 in l3..

    for(int i:l3){
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
     
    l.erase(l.begin());
    
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of List"<<l.size()<<endl;
    return 0;
}