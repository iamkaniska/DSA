//find-first-and-last-position-of-element-in-sorted-array

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int hi=n-1;
    int target;
    cout<<"Enter target value: ";
    cin>>target;
    int ans=0,ans2=0;
    while(low<=hi){
        int mid=low+(hi-low)/2;
        if(arr[mid]==target){
            ans=mid;
            hi=mid-1;
            // ans2=mid2;
            // low=mid2+1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    low=0;
    hi=n-1;
    while(low<=hi){
          int mid2=low+(hi-low)/2;
        if(arr[mid2]==target){
            ans2=mid2;
            low=mid2+1;
            // ans2=mid2;
            // low=mid2+1;
        }
        else if(arr[mid2]<target){
            low=mid2+1;
        }
        else{
            hi=mid2-1;
        }
    }
    cout<<ans<<" "<<ans2;
}