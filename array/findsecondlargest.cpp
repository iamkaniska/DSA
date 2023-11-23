/*


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

*/


#include<iostream>
#include <algorithm>
using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int arr[100];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     sort(arr[0], arr[n-1]);

//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
    // show(arr[0], arr[n-1]);
// }

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the n largest element: ";
    int x;
    cin>>x;
    cout<<arr[n-x];
    return 0;
}