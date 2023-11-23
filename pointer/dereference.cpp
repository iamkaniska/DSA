// #include<iostream>
// using namespace std;
// int main(){
//     int a = 9;
//     int *p=&a;
//     cout<<*p;

// }
/* 2. */
#include<iostream>
using namespace std;
int main(){
    int a = 9;
    int *p=&a;
    cout<<a<<endl;
    *p=6;
    cout<<a<<endl;
    cout<<*p;
}