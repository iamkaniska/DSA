#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
void function(int n,int arr[i],int[j]){
    int i=0;
    int j=n-1;
    while (i<j)
    {
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
       i++;
       j--;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // int i=0;
    // int j=n-1;
    // while (i<j)
    // {
    //    int temp=arr[i];
    //    arr[i]=arr[j];
    //    arr[j]=temp;
    //    i++;
    //    j--;
    // }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
         // still not working.....
       
}