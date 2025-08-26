#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> v1(5);         // created a vector with 5 empty space
    vector<int> v2(5,1);        //created a vector with 5 space and intialize with 1 
    
    for(int i:v2){
        cout<<i<<" ";   
    }cout<<endl;

    vector<int> last(v2);

    for(int i:last){
        cout<<i<<" ";   
    }cout<<endl;

    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;                //capacity indicates Size allotted to the element

    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    cout<<"Size -> "<<v.size()<<endl;                     //Size indecates How many element in the vector

    cout<<"Second Element in the Vector"<<v.at(1)<<endl;  //at(2) <- at 2 index

    cout<<"Front :"<<v.front()<<endl;

    cout<<"Back :"<<v.back()<<endl;

     for(int i:v){
        cout<<i<<" ";   // Before pop
    }cout<<endl;

    v.pop_back();   // for deleting last ele

    for(int i:v){
        cout<<i<<" ";    //After pop
    }cout<<endl;


    cout<<"Before clear :"<<v.size()<<endl;

    v.clear();

     cout<<"After clear :"<<v.size()<<endl;

    

    return 0;
}