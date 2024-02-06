#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    //for print original vecotr
    for (int i = 0; i <v.size(); i++)
    {
        cin>>v[i];
    }
    int cntZero=0;
    int cntOne=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==0 )
        {
            cntZero++;
        }
        else{
            cntOne++;
        }   
    }
    for(int i=0;i<cntZero;i++){
        v[i]=0;
    }
    for(int i=cntZero;i<cntZero+cntOne;i++){
        v[i]=1;
    }
     for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

}   
