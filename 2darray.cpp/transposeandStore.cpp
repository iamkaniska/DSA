#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter row and colm size : ";
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m)); // define matrix using vector 
    for (int i = 0; i < n; i++) // user input for an a matrix
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    // output of an matrix
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
    //this is not store a transpose matrix
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
    //this is for to store a transpose matrix
    int t[m][n];
    for (int i = 0; i <m ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            t[i][j]=arr[j][i];
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
        
    }
        
    

}