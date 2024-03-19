/* brute force method --- */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void sort(vector<int>&v){
//     int n=v.size();
//     int noz=0;
//     int noo=0;
//     int noT=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i]==0)
//         {
//             noz++;
//         }
//         else if(v[i]==1){
//             noo++;
//         }
//         else{
//             noT++;
//         }  
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (i<noz)
//         {
//             v[i]=0;
//         }
//         else if(i<noo+noz){
//             v[i]=1;
//         }
//         else{
//             v[i]=2;
//         }
        
//     }
    
    
// }

// int main(){
//     vector<int>v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(2);
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



/* optimize process ---- */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort1(vector<int>&v){
    int n=v.size();
    int mid=0;
    int high=n-1;
    int min=0;
    while (mid<high)
    {
        if (mid==2)
        {
            swap(mid,high);
            high--;
        }
        if(mid==0){
            swap(min,mid);
            mid++;
            min++;
        },,,
    }
    
    
}
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
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


