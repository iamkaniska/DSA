#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int i;
    v.push_back(10);
    v.push_back(9);
    v.push_back(8);
    v.push_back(7);
    v.push_back(6);
    for ( i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        
    }
    v.pop_back(2);
    cout<<v[i]<<" ";
}