#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void search(vector<int>&v){
    int n=v.size();
    int min=0;
    int max=n-1;
    int target;
    cin>>target;
    
    while (min<=max)
    {   
        int mid=(min+max)/2;
        if (v[mid]==target)
        {
            cout<<mid;
            return;
        }

        else if(v[mid]<target){
            min=mid+1;
        }
        else{
            max=mid=1;
        }

    }
    cout<<"-1";

    
    
}
int main(){
    
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(5);
    v.push_back(9);
    v.push_back(13);
    v.push_back(15);
    v.push_back(17);
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
    search(v);
    
    
}