#include<iostream>
using namespace std;
int main()
{
    // string str;
    // getline(cin,str);

    // int n=str.length();
    // string out;

    // for(int i=0;i<n;i++)
    // {
    //     if(str[i]>='a' && str[i]<='z')
    //     {
    //         out +=str[i]-32;
    //     }
    //     else if(str[i]>='A' && str[i]<='Z')
    //     {
    //         out +=str[i]+32;
    //     }
    //     else{
    //         out +=str[i];
    //     }
    // }
    // cout<<out;
    string str,out;
    getline(cin,str);
    int n=str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i]>='a' && str[i<='z'])
        {
            out+=str[i]-32;
        }
        else if (str[i]>='A' && str[i<='Z'])
        {
            out+=str[i]+32;
        }
        else{
            out+=str[i];
        }
        
        
    }
    cout<<out;
    



}