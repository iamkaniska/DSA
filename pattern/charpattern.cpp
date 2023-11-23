/*
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a Number: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<(char)(j+97)<<" ";
        } 
            // cout<<(char)(i+64)<<" ";

        cout<<endl;
    }
    
}