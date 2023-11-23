#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{ 
    // string str;
    // cin>>str;
    // string b;
    // cin>>b;
    // int rotated;
    // cin>>rotated;
    // if (b=="l")
    // {
    //  rotate(str.begin(),str.begin()+rotated,str.end());   
    // }
    // else if (b=="r")
    // {
    //  rotate(str.begin(),str.end()-rotated,str.end());   
    // }
    // cout<<str;
    string a;
    cin>>a;
    string b;
    cin>>b;
    int rotated;
    cin>>rotated;
    if (b=="l")
    {
        rotate(a.begin(),a.begin()+rotated,a.end());
    }
    else if (b=="r")
    {
        rotate(a.begin(),a.end()-rotated,a.end());
    }
    cout<<a;

    

    
}
