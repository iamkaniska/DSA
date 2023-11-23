/* Largest/2nd / Number Using vector */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter vector size: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter "<<n<<" Vector:"; 
    //user input using vector
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];  
    }
    cout<<"Output of user define vectors: ";
    //to print the user input
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";  
    }
    cout<<endl;
    //for ascending order..
    sort(v.begin(),v.end());
    cout<<"ascending order: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";  
    }
    cout<<endl;
    //now 1st,2nd,3rd or n largest number..
    cout<<"largest number: ";
    cout<<v[n-1];
}