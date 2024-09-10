#include<iostream>
using namespace std;
int main(){
    cout<<"Enter size of an array: ";
    int n,m;
    cin>>n;
    cout<<"Enter size of an array: ";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    bool x=false;
    cout<<"Enter Target: ";
    cin>>target;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==target){
                    x=true;
                    break;
                }
            }
        }
        if(x==true){
            cout<<"true";
        }
        else cout<<"false";
    
}