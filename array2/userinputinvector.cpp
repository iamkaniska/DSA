#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    // v.push_back(5); // 1(size) 1(capacity)
    // v.push_back(6); // 2 2
    // v.push_back(7); // 3 4
    // v.push_back(11); // 4 4
    // v.push_back(9); // 5 8
    // v.push_back(10); // 6 8
    // v.push_back(6); // 7 8
    // v.push_back(7); // 8 8
    // v.push_back(11); // 9 16
    // v.push_back(9);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
    cout<<v[2];
    
    
}