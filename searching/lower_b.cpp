#include<iostream>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>target)
        {
            cout<<arr[i-1];
            break;
        }
        
    }
    
}