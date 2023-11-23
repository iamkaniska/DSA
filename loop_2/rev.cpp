// print odd numbers in 1 to 100;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Numbers: ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        // if (i%2!=0)
        // {
        //     cout<<i<<endl;
        // }
        if (i%2!=0)
        {
            cout<<i<<endl; 
            continue;
        }
        
    }
    
    
}