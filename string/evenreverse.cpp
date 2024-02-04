/* 
input a string of even length and reverse the first half of the string..
 */

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string n;
    cout<<"enter a string: ";
    getline(cin,n);
    int s=n.length();
    //1st method of usign this..
    // reverse(n.begin()+0,n.begin()+4);
    // cout<<n<<endl;
    //2nd method of using this..
    reverse(n.begin(),n.end());
    cout<<n;
}