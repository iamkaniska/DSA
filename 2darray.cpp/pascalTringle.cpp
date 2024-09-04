#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of an array: ";
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    // for specific row
    int row;
    cin>>row;
    if(row<n){
        for(int i=0;i<=row;i++){
            cout<<arr[row][i]<<" ";
        }
        cout<<endl;
    }
}