/* 
return a total number of digit in a number without any loop...
 */
// hint --> try using inbuilt to_string function....

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n =123456789;
    string x=to_string(n);
    cout<<x.length();
}