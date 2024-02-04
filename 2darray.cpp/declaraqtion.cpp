#include<iostream>
using namespace std;
int main(){
    // int arr[3][3];
    // arr[0][2]=5;
    // cout<<arr[0][2];
    // int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int x[3][3]={1,2,3,4,5,6,7,8,9};
    // cout<<x[0][2];
    // cout<<x[2][2];
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<x[0][i];
    // }
    // cout<<endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<x[1][i];
    // }
    // cout<<endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<x[2][i];
    // }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<x[i][j];
        }
        cout<<endl;
        
    }
    

    


}
