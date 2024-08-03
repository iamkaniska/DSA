#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lgrt = -1;
    int data = 0;
    for (int i = 0; i < n; i++)
    {
        lgrt=data;
        if (lgrt<arr[i])
        {
            lgrt=arr[i];
            
        }
        
    }
    

}