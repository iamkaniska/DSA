#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int>v;
    cout<<"Enter Array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter arr element : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"arr element are : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}