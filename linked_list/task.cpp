#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i<n)
        {
            cout<<arr[0]<<arr[2]<<arr[3];
            break;
        }
    }  
}