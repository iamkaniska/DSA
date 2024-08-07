#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //size of an array
    int arr[n][n]; //2d array
    //user input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //to print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;  
    }
    cout<<"to print transpose set matrix : ";
    cout<<endl;
    for(int i=0;i<n;i++){
        for (int j = i+1; j < n; j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }  
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;  
    }
    
}