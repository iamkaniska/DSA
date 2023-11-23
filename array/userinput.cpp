/* basic array to print the user input  */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"array size: ";
    cin>>n;
    cout<<"Enter Array Number: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"the output is: ";
    for (int i = 0; i < n; i++)
    {
        
        cout<<arr[i]<<" ";
    }
}