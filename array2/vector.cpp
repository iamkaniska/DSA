/* push_back,pop_back,size,capacity,at,sort */

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(5);
    // v[1]=1;
    // cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(6);
    // cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(7);
    // cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(11);
    // cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(9);
    // cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(10);
    // cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    
    cout<<v[0];
    cout<<v[1];
    cout<<v[2];
    cout<<v[3];
    cout<<v[4];
    cout<<v[5];
    // cout<<v[6];
    cout<<endl;
    

    
    return 0;
}