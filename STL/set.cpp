#include<iostream>
#include<set>
using namespace std;
int main(){

    set<int> s;

    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(4);
    s.insert(5);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<s.count(-1)<<endl;          //checks Num is Present in the set or Wot ??

    set<int>::iterator itr= s.find(5);

    for(auto i  = itr; i!=s.end(); i++ ){
        cout<<*it<<" ";
    }cout<<endl;

    return 0;
}