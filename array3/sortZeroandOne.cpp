// /* 
// this is brute force method of sorting zeores and ones...
//  */
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void sort(vector<int>&v){
//     int noz=0;
//     int noo=0;
//     int n=v.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i]==0)
//         {
//             noz++;
//         }
//         else{
//             noo++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (i<noz)
//         {
//            v[i]=0; 
//         }
//         else{
//             v[i]=1;
//         }
        
//     }   
// }
// int main(){
//     vector<int>v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i];
//     }
//     cout<<endl;
//     sort(v);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i];
//     }
    

// }

/* 
this is optimize process of sorting zeroes and ones.... Using 2 pointers
 */
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void sort1(vector<int>&v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while (i<j)
    {
        if (v[i]==0)
        {
            i++;
        }
        if(v[j]==1){
            j--;
        }
        if(i>j){
            break;
        }
        if(v[i]==1 && v[j]==0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
}
int main(){
    vector<int>v;
    v.push_back(0);
    // v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    // v.push_back(2);
    // v.push_back(2);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    sort1(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
}