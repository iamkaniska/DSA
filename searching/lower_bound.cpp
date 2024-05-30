#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void lower_bound(vector<int>&v){
    int target =9;
    int n=v.size();
    int low=0;
    int high=n-1;
    bool flag=false;
    while (low<high)
    {
        int mid=low+(high-low)/2;
        if (target==v[mid])
        {
            flag=true;
            cout<<v[mid]-1;
            break;
        }
        else if(target<v[mid]){
            high=mid-1;
        }
        else{
            low=mid;
        } 
    }
    if (flag==false)
    {
        cout<<v[high];
    }
    
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(9);
    v.push_back(15);
    v.push_back(18);
    v.push_back(21);
    v.push_back(24);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    lower_bound(v);


}