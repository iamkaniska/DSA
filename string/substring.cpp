/* 
sub string is like abc --> a,ab,abc,bc,c but not -->cb
 */
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string n="abcdef";
    cout<<n.substr(2,3);
}