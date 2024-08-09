/* write a program add 2 matrix... */
/* add extra comment */
#include<iostream>
using namespace std;
int main(){
    
    int n,m;
    cout<<"Enter the size of the matrix"<<endl;
    cin>>n>>m;
    cout<<"Enter the number of the matrix"<<endl;
    int mat1[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mat1[i][j];
        }
    }
    cout<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"transpose of  a matrix"<<endl;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
    

    
    



    
}