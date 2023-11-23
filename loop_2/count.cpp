#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter a number: ";
    int count=0;
    cin>>n;
    a=n;
    while (n>0)
    {
        n=n/10;
        count++;            
    }
    if (a==0)
    {
        cout<<1;
    }
    else{
        cout<<count;
    }
    
    
}

