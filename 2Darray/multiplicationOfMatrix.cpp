#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter row: ";
    cin>>n;
    cout<<"Enter coloum: ";
    cin>>m;
    int mat[n][m];
    cout<<"now enter the user input of the matrix: "<<endl;
    int p,q;
    cout<<"Enter row: ";
    cin>>p;
    cout<<"Enter coloum: ";
    cin>>q;
    int matTwo[p][q];
    cout<<"now enter the user input of the matrix: "<<endl;
    if (m==p)
    {
       for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mat[i][j];
        }
        
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin>>matTwo[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            int res[i][j];
            for (int k = 0; k < p; k++)
            {
                res[i][j]+=mat[i][k]*matTwo[k][j];
            }
        for (int i = 0; i < n; i++)
        {
        for (int j = 0; j < q; j++)
        {
            cout<<res[i][j];
        }
        
    }
            
        }
        
    }
    
    
    





    }
    
    
    

}