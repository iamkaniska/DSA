//spiral matrix easist way
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
    int dir=0;
    cout<<"Enter the array userInput: ";
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int top=0, bottom=n-1,left=0,right=m-1; 
     while(top<=bottom && left<=right){
        if(dir==0){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top+=1;
        dir=1;
        }
        else if(dir==1){
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";   
        }
        right--;
        dir=2;
        }
        else if(dir==2){
        for(int i=right;i>=left;i--){
            cout<<arr[bottom][i]<<" ";
            
        }
        bottom--;
        dir=3;
        }
        else if(dir==3){
        for(int i=bottom;i>=top;i--){
            cout<<arr[i][left]<<" "; 
        }
        left++;
        dir=0;
        }
        
     }
 }