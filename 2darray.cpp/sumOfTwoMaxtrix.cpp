/* write a program add 2 matrix... */
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter Second Matrix"<<endl;
    int arr2[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<"enter sum of 2 matrices"<<endl;
    int res[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            res[i][j]=arr[i][j]+arr[i][j];
            cout<<res[i][j]<<" ";
        }
    }



    
}