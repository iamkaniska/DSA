/* score after fliping matrix */
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
    for(int i=0;i<n;i++){
        if(arr[i][0]==0){
            for(int j=0;j<m;j++){ //for fliping
                if(arr[i][j]==0){
                    arr[i][j]=1;
                }
                else{
                    arr[i][j]=0;
                }
            }
        }

    }
    for(int j=0;j<m;j++){
        int noz=0;
        int noo=0;
        for(int i=0;i<n;i++){
            if(arr[i][j]==0){
                noz++;
            }
            else noo++;
        }
        if(noz>noo){
        for(int i=0;i<n;i++){
            if(arr[i][j]==0){
                arr[i][j]=1;
            }
            else arr[i][j]=0;
        }
    }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        int x=1;
        for(int j=m-1;j>=0;j--){
            sum+=arr[i][j]*x;
            x*=2;
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        }
        cout<<sum;
        break;
    }
    
}