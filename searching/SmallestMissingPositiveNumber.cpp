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
    int low=0;
    int hi=n-1;
    int nex=-1;
    while(low<=hi){
        int mid=low+(hi-low)/2;
        if (arr[mid]==mid)
        {
            low=mid+1;
        }
        else{
            nex=mid;
            hi=mid-1;
        }
    }
    cout<<"the value is: "<<nex;
    
}