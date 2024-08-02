/* sort 0,1,2 in optimize procress with datch flag algorithm or 3 pointer */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>merge(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int>arr3(n+m);
    int i=0;
    int j=0;
    int k=0;
    while (i<=n && j<=m)
    {
        if (arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else if(arr1[i]>arr2[j]){
            arr3[k]=arr2[j];
            j++;
            k++;
        } 
    }
    k=k-1;
        while (j<=m)
        {    
            arr3[k]=arr2[j];
            j++;
            k++;
        }
        while (i<=n-1)
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
    return arr3;
}
int main(){
    vector<int>arr1;
    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(5);
    arr1.push_back(7);
    arr1.push_back(9);
    arr1.push_back(11);
    arr1.push_back(12);
    for (int i = 0; i < arr1.size(); i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    vector<int>arr2;
    arr2.push_back(2);
    arr2.push_back(4);
    arr2.push_back(6);
    arr2.push_back(8);
    arr2.push_back(10);
    arr2.push_back(16);
    for (int i = 0; i < arr2.size(); i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    vector<int>arr3=merge(arr1,arr2);
    for (int i = 0; i < arr3.size(); i++)
    {
        cout<<arr3[i]<<" ";
    }
}