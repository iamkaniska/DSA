#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(15); 
    v.push_back(7); 
    v.push_back(6); 
    v.push_back(11); 
    v.push_back(9); 
    v.push_back(10); 
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
}
