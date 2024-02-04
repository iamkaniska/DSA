#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Vector Size: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter Vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    return 0;
    }