/* size of array is a predefine function of array */
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<sizeof(arr)/4;
}