#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {

    int n;
    // define 
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        // without size define input doesnt occured cin>>v[i];
        v.push_back(x);
    }
    for(auto &i:v){
        cout<<i<<" ";
        
    }
    cout<<endl;

    v.push_back(100);
    for(auto &i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    for(auto &i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+0); // erase elemnt at any index if you want to delete 
      for(auto &i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.erase(remove(v.begin(), v.end(),3),v.end()); // delete element from vector using this function 
    
       for(auto &i:v){
        cout<<i<<" ";
    }
    cout<<endl;


    
    return 0;
}
