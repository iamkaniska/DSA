/* leetcode 441. Arranging Coins */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;int hi=n-1;
    while(low<=hi){
        int mid=low+(hi-low)/2;
        int value=mid*(mid+1)/2;
        if(value==n){
            cout<<mid;
        }
        else if(value<n){
            hi=mid-1;
        }
        else{
            low=mid+1;
        }
    }

}