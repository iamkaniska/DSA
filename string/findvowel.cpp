/* 
input  a string of length n and count all the vowels in the given string....
 */
#include <iostream>
#include<string>
#include <cctype>
using namespace std;
int main()
{ 
    string str;
    int i;
    getline(cin,str);
    int n = str.size();
    int cnt= 0;
     for(i= 0;i<n;i++){ 
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            cnt++;
            cout<<str[i];
        }
     }
     cout<<endl;
     cout<<cnt;

    return 0;
}
