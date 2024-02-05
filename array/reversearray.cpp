// #include<iostream>
// using namespace std;
// int main(){
//     int n,temp;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<endl;
//     for (int i=n-1; i >= 0; i--)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i=0;int j=n-1;
    while (i<j)
    {
        // swap(arr[i],arr[j]);
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
}