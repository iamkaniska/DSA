#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>a){ // if we use & operator then it use like reference otherwise it work like passing value
     a[0]=100;
    for(int i = 0; i < a.size(); i++)
{
    cout<<a[i]<<" ";
}
    }
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(8);
    v.push_back(5);
    v.push_back(3);
    for(int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
change(v);
cout<<endl;
 for(int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}

}


