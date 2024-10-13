// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//          cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     for(int i=0;i<n;i++){
//         if(arr[i]>target){
//             cout<<arr[i-1];
//             break;
//         }
//     }
// }
/* using binary search */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    int target;
    cin>>target;
    bool flag=true;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            cout<<arr[mid];
            flag=false;
            break;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(flag==true){
            cout<<arr[high];
            
        }
}
