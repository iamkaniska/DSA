// /* make a function which calculate the factorial of n using recursion */
// #include<iostream>
// using namespace std;
// int loop(int x){
//     int n=1;
//     for (int i = 1; i <= x; i++)
//     {
//         n=n*i;
//     }
//     return n;
    
// }
// void loop2(int x){
//     int n=1;
//     for (int i = 1; i <= x; i++)
//     {
//         n=n*i;
//         cout<<n<<endl;
//     }
//     cout<<n<<endl;
    
// }
// int main(){
//     cout<<"return fucntion "<< loop(5);
//     cout<<endl;
//     cout<<"without return ";
//     cout<<endl;
//     loop2(5);

// }

#include<iostream>
using namespace std;
// void fun(int n){
//     if(n==1){
//         cout<<n;
//        return;
//     }
//     n=n*1;
//     fun(n-1);
// }

// int fun2(int n){
//     int m=1;
//     for(int i=1;i<=n;i++){
//         m=m*i;
//     }
//     return m;
// }
void fun(int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p=p*i;
        cout<<p<<endl;
    }

}
int main(){
    // int m;
    // cin>>m;
//    cout<< fun2(m)<<endl;
   fun(5);

}