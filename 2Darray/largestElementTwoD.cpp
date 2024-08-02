/* how to print 2d array using user input*/
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n][m];
    //array initialization
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int target = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (target<arr[i][j])
            {
                target = arr[i][j];   
            }
            
        }
        
    }

    cout<<"largest element in 2d array : "<<target;
    
}