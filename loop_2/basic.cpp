#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
        cin>>arr[i][j];
        }
    }
    // int ans[8];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==1 && i==1){
                continue;
            }
            cout<<arr[i][j];
        }
    }
    // for(int i=0; i<8; i++){
    //     cout<<ans[i];
    // }



    return 0;
}