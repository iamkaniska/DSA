#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void select(vector<int>&v,int k){
    int n=v.size();
    for (int i = 0; i < n-1; i++)
    {
        int neew=i;
        for (int j = i;j < n; j++)
        {
            if (v[j]<v[neew])
            {
                neew=j;
            }
        }
        swap(v[i],v[neew]);
    }
}
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    // v.push_back(9);
    int n=v.size();
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    select(v,n);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}