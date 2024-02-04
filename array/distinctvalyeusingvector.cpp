#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>ans;
    for(int i=0; i<n; i++){
        if(v[i]!=v[i+1]){
            ans.push_back(v[i]);
            // cout<<v[i]<<" ";
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


}