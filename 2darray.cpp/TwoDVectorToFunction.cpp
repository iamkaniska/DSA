#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<vector<int>>&v4){
    v4[0][0]=100;
    }
void length(vector<vector<int>>&v4){
     cout<<v4.size();
    
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    vector<int>v1;
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);
    vector<vector<int>>v3;
    v3.push_back(v);
    v3.push_back(v1);
    // cout<<v3[0][0]<<endl;
    // change(v3);
    // cout<<v3[0][0];
    length(v3);

















    // vector<int>v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // vector<int>v1;
    // v1.push_back(5);
    // v1.push_back(6);
    // v1.push_back(7);
    // v1.push_back(8);
    // vector<int>v2;
    // v2.push_back(9);
    // v2.push_back(10);
    // v2.push_back(11);
    // v2.push_back(12);
    // vector<vector<int>>v3;
    // v3.push_back(v);
    // v3.push_back(v1);
    // v3.push_back(v2);
    // v3.push_back(v);
    // cout<<v3[2][2];

}
