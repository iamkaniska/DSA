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
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int top=0, bottom=n-1,left=0,right=m-1; 
     while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top+=1;
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
            
        }
        right--;
        for(int i=right;i>=left;i--){
            cout<<arr[bottom][i]<<" ";
            
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            cout<<arr[i][left]<<" "; 
        }
        left++;
     }
    
 }