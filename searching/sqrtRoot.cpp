#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    // cout<<"Enter array element: ";
    vector<int>v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    int low=0;
    int hi=v.size()-1;
    int sq=0;
    int target;
    cout<<"Enter target: ";
    cin>>target;
    while(low<=hi){
        int mid=low+(hi-low)/2;
        if(mid*mid<=target){
            sq=mid;
            break;
        }
        else if(mid*mid<target){
            low=mid+1;
        }
        else if(mid*mid>target){
            hi=mid-1;
        }
    }
    cout<<sq;
}


/* linear search in array */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     int ans=0;
//     cin>>target;
//     for(int i=0;i<n;i++){
//         if(arr[i]*arr[i]==target){
//            ans=arr[i]; 
//         }
//     }
//     cout<<ans;

// }


/* linear search using vector */
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int target;
//     int ans=0;
//     cin>>target;
//     for(int i=0;i<n;i++){
//         if(v[i]*v[i]==target){
//            ans=v[i]; 
//         }
//     }
//     cout<<ans;

// }



// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     long long n;
//     cin>>n;
//     vector<long long>v(n);
//     long long target;
//     long long ans=0;
//     cin>>target;
//     for(long long i=0;i<(n/2);i++){
//         if(i*i<=target){
//            ans=i; 
//         }
        
//     }
//     cout<<ans;

// }