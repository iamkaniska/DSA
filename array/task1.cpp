/* cheak marks of student whose cross the passing marks... */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <= n-1; i++)
    {
        if (arr[i]<35)
        {
            cout<<i<<" ";
        }
        
    }
    
    

}