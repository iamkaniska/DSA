#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=0;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
        arr[i]=arr[i+1];
        m=i;
        } 
    }
    cout<<m-1;
}