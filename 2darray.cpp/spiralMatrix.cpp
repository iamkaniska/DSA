#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row size of an array: ";
    cin>>n;
    int m;
    cout<<"Enter the col size of an array: ";
    cin>>m;
    int arr[n][m];
    cout<<"Enter the array userInput: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int minr=0, minc=0;
    int maxr=n-1,maxc=m-1;
    for(int j=minr;j<=maxr;j++){
       cout<<(arr[minc][j])<<" " ;
    }
    minr++;
    for(int i=minc+1;i<=maxc;i++){
       cout<<(arr[i][minr+1])<<" " ;
    }
    minc++;
    for(int j=minr;j<=maxr;j++){
       cout<<(arr[minc][j])<<" " ;
    }
    // for(int j=minr;j<=maxr;j++){
    //    cout<<(arr[minc][j]<<" ") ;
    // }
}