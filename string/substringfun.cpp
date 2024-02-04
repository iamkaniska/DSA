/* 
input a string of even length and return the 2nd half of that string
 using inbuilt substr function
 */

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string n;
    cout<<"enter a string: ";
    getline(cin,n);
    int x= n.length();
    cout<<"the substring is: "<<n.substr(x/2);
}