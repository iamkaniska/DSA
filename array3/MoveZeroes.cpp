//this method work when only move zeroes to the end... other wise the startting part fill with unorder array element
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]!=0){
            i++;
        }
        if(arr[j]==0){
            j--;
        }
        if(i>j){
            break;
        }
        if(arr[i]==0){
            swap(arr[i],arr[j]);
        }
        i++;
        j--;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}