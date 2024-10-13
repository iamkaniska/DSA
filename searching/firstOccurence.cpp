// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int low=0;
//     int high=n-1;
//     int target;
//     cin>>target;
//     bool flag=false;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==target){
//             if(arr[mid-1]!=target){
//                 cout<<mid;
//                 flag=true;
//                 break;
//             }
//             else{
//             high=mid-1;
//             }
//         }
//         else if(arr[mid]<target){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int hi=n-1;
    int target;
    cout<<"Enter target value: ";
    cin>>target;
    while(low<=hi){
        int mid=low+(hi-low)/2;
        if(arr[mid]==target && arr[mid-1]==target){
            hi=mid-1;
            if(arr[mid]==target){
                cout<<arr[mid];
                break;
            }
            else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            hi=mid-1;
        }
        }
    }
}