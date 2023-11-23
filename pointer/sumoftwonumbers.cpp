/* sum of two numbers using pointers */
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 9;
//     int b = 10;
//     int *x=&a;
//     int *y=&b;
//     cout<<*x+*y;
// }
/* using user input */
#include<iostream>
using namespace std;
int main(){
    int a,b;
    int *x=&a;
    int *y=&b;
    cout<<"enter 1st number: ";
    cin>>*x;
    cout<<"enter 2st number: ";
    cin>>*y;
    cout<<*x+*y;
}