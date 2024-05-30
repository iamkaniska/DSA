/* sum of n numbers using recursion */
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if (n==1) return 1;
//     int x=n+sum(n-1);
//     return x; 
// }
// int main(){
//     cout<<sum(10);
// }
/* sum of n numbers using recursion with extra variable */
#include<iostream>
using namespace std;
void sum1(int sum,int n){
    if (n==0) {
        cout<<sum<<endl;
        return;
    }
    sum1(sum+n,n-1);
 
}
int main(){
    sum1(0,10);
}