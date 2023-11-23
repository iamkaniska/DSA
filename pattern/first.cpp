#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<< "Enter Row Number: ";
    cin>>n;
    // cout<< "Enter Coloum Number: ";
    // cin>>m;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    

}