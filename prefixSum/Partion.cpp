#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,6};
    int n=sizeof(arr)/sizeof(arr[0]); //size 
    //prefixSum
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    bool flag=false;
    int idx=-1;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            flag=true;
            idx=i;
            break;
        }
    }
    //logic
    if(flag==true) cout<<"this is good "<<idx;
    else cout<<"this is bad";

}