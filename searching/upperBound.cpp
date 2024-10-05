#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    int target;
    cout<<"Enter the target element";
    cin>>target;
     while(low < high){  // Notice the condition is low < high
        int mid = low + (high - low) / 2;

        if(arr[mid] <= target){ // If arr[mid] is less than or equal to target, move right
            low = mid + 1;
        }
        else{ // If arr[mid] is greater, move left
            high = mid;
        }
    }
    if(low<n){
        cout<<arr[low];
    }
    else{
        cout<<target;
    }
}