
// largest element..

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" array: "; 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[0]<=arr[i])
        {
            (arr[0]=arr[i]);
        }
    }
     cout<<arr[0];

}


