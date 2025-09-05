#include<iostream>
using namespace std;
void prefixSum(int n, int arr[]){

    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
}
void display(int n, int arr[]){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int  main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    cout<<"original array: "<<endl;
    display(n, arr);
    prefixSum(n, arr);
    cout<<"prefix arr array: "<<endl;
    display(n, arr);



}