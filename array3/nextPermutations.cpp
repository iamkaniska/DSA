/*
input size --> 4
input -->1 3 5 2
output -->1 5 2 3 


*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int idx =-1;
    int n;
    cin>>n;
    vector<int>v(n);
    // for user input
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    cout<<endl; // next line
    // find pivot
    for (int i = n-2; i >=0; i--)
    {
        if (v[i]<v[i+1])
        {
            idx=i;
            break;
        } 
    } 
    // reverse if pivot not exist
    if(idx==-1){
        reverse(v.begin(),v.end());
        
    }
    else
    // reverse after pivot (1)
    reverse(v.begin()+idx+1,v.end());
    // idx swap with the next big element with pivot
    int j=-1;
    for (int i = idx+1; i < n; i++)
    {
        if(v[i]>v[idx]){
            j=i;
            break;
        }
    }
    swap(v[idx],v[j]);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    
    
    
}