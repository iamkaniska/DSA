/* sort 0,1,2 in optimize procress with datch flag algorithm or 3 pointer */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort2(vector<int>&v){
    int i=0;
    int n=v.size();
    int j=n=1;
    int k=n-1;
    while (i<j)
    {
        if (v[i]==0)
        {
            i++;
        }
        else if(v[k]==2){
            k--;
        }
        
    }
    
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    sort2(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    

    

}