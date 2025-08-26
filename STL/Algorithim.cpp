#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);

    int n; 
    cin>>n;

    cout<<binary_search(v.begin(),v.end(),n)<<endl;

    cout<<"lower Bound ->" <<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"Upper Bound ->" <<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a = 3;
    int b = 5;
    cout<<max(a,b)<<endl;

    cout<<min(a,b)<<endl;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"String ->"<<abcd<<endl;
    

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After Rotate :";
    for(int i:v){
        cout<<i<<endl;
    }

    return 0;
}