#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            target=i;
            target++;
        }
    }
    for(int i=target;i<n;i++){
        
    }

}
