#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"Enter Row and Col : ";
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"out put \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
}