#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    // for (int i = 0; i < n; i++)
    // {
        for (int i=n-1; i-k >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
        for (int i=i-k; n-1 >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
        for (int i=n-1; n >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    // }
}