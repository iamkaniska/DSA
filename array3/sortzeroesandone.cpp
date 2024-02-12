#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void easy(vector<int>&v){
    int n=v.size();
    int noZ=0;
    int noO=0;
    for (int i = 0; i <n ; i++)
    {
        if (v[i]==0)
        {
            noZ++;
        }
        else{
            noO++;
        }  
    }
    for (int i = 0; i < n; i++)
    {
        if (i<noZ)
        {
            v[i]=0;
        }
        else{
            v[i]=1;
        }
        
    }
    
    
}
int main(){
    int p;
    cin>>p;
    vector<int>v(p);
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(0);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    easy(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    

}   
