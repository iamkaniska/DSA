#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int copy(vector<int>&v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
}
void nose(int n,int arr[i]){
    for (int i=n-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
}
 
int main(){
    int x;
    cin>>x;
    vector<int>n(x);
    for (int i = 0; i < n.size(); i++)
    {
        cin>>n[i];
    }
    


}