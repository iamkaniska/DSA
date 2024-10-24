#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    bool flag=false;
        // Your code here
        for(int i=0;i<n;i++){
            if(arr[i]==k){
            flag=true;
            }
        }
        if(flag==true){
            cout<< "true";
        }
        else{
            cout<<"false";
        }
}