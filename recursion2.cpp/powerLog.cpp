//working but not good in time complexity
// #include<iostream>
// using namespace std;
// int pow(int n,int m){
//     if(m==0) return 1;
//     return n*(pow(n,m-1));
// }
// int main(){
//     pow(2,3);
// }

//for good time complexity
#include<iostream>
using namespace std;
int pow(int n,int m){
    if(m==0) return 1;
    if(m==1) return n;
    int store=pow(n,m/2);
    if(m%2==0){
        return store*store;
    }
    if(m%2!=0){
        return (store*store)*n;
    }
    
}
int main(){
    cout<<pow(2,5);
}

