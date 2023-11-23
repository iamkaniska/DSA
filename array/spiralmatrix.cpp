#include<iostream>
using namespace std;


void spiralprint(int n,int m,int arr[][100])
{
    int t=0;
    int b=n-1;
    int l=0;
    int r=m-1;
    int dir=0;

    while(t<=b && l<=r)
    {
        if(dir==0)
        {
            for(int i=l;i<=r;i++)
            {
                cout<<arr[t][i];
            }
            t++;
        }
        else if(dir==1)
        {
            for(int i=t;i<=b;i++)
            {
                cout<<arr[i][r];
            }
            r--;

        }
        else if(dir==2)
        {
            for(int i=r;i>=l;i--)
            {
                cout<<arr[b][i];
            }
            b--;
        }
        else if(dir==3)
        {
            for(int i=b;i>=t;i--)
            {
                cout<<arr[i][l];
            }
            l++;
        }
        dir=(dir+1)%4;
    }
}


int main()
{
    int n,m;
    cin>>n>>m;


    int arr[100][100];


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }


    spiralprint(n,m,arr);
}