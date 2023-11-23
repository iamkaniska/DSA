/* linear search, its actually a search process of the array element */
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
    int x;
    cout<<"Enter the number you want to search: ";
    cin>>x;
    for (int i = 0; i <= n-1; i++)
    {
        if (arr[i]==x)
        {
            cout<<"present";
        }
        else{
            cout<<"not present";
            break;
        }
        
    }
    
    

}