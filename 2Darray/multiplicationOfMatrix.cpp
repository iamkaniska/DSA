#include<iostream>
using namespace std;
int main(){
    //take size of an 2d array
    int n,m;
    cout<<"Enter row: ";
    cin>>n;
    cout<<"Enter coloum: ";
    cin>>m;

    // take size of an another array
    int p,q;
    cout<<"Enter row: ";
    cin>>p;
    cout<<"Enter coloum: ";
    cin>>q;


    if (m==p)
    {
    int mat[n][m];
    cout<<"now enter the user input of the matrix: "<<endl;
       for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mat[i][j];
        }
        
    }
     int matTwo[p][q];
    cout<<"now enter the user input of the matrix: "<<endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin>>matTwo[i][j];
        }
        
    }
    int res[n][q];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            res[i][j]=0;
            for (int k = 0; k < p; k++)
            {
                res[i][j]+=mat[i][k]*matTwo[k][j];
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
        {
        for (int j = 0; j < q; j++)
        {
            cout<<res[i][j]<<" ";
        }
        
    }
    
    
    





    }
    
    
    

}