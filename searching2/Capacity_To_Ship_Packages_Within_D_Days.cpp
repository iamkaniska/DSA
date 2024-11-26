/* 1011. Capacity To Ship Packages Within D Days
 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int days;
    cout<<"Enter days: ";
    cin>>days;
    //[3,2,2,4,1,4], days = 3
    int low=0;
    int hi=0;
    for(int i=0;i<n;i++){
            low=max(low,arr[i]);
            hi=arr[i]+hi;
    }
    int ans=0;
    while(low<=hi){
        int mid=low+(hi-low)/2;
        if((mid,days,hi)==true){
           ans= arr[mid];
           hi=mid-1;
        }  
        else{
            low=mid+1;
        }
    }
    cout<<ans;


}