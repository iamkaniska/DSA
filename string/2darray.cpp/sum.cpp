#include<iostream>
#include<climits>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter Array size: ";
    cin>>x>>y;
    int arr[x][y];
    cout<<"Enter array: ";
    for (int i = 0; i <= x-1; i++)
    {
        for (int j = 0; j <= y-1; j++)
        {
            cin>>arr[i][j];
        }     
    }
    int sum=0;
    for (int i = 0; i <= x-1; i++)
    {
        for (int j = 0; j <= y-1; j++)
        {
            sum=sum+arr[i][j];  
        }     
    }
    cout<<sum;

}