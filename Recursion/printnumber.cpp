/* print N to 1 */
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         return;
//     }
//     // cout<<"Good Morning"<<endl;
//     cout<<n<<" ";
//     print(n-1);


// }
// int main(){
//     print(3);
// }



/* print 1 to N  */
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         return;
//     }
//     print(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }


/* make a function which calculate the factorialof n using recursion */
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     int ans=n*fact(n-1);
//     return ans;


// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n);
// }


/* factorial in easy way */
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     return(n*fact(n-1));
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n);
// }


/* print sum of n numbers using recurison */
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     return(n+fact(n-1));
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n);
// }


 /* sum of n numbers using recursion with extra variable */

// #include<iostream>
// using namespace std;
// void sum1toN(int i,int n){
//     if(n==0){
//         cout<<i;
//     }
//     sum1toN(i+n,n-1);

// }
// int main(){
//     int n;
//     cin>>n;
//     sum1toN(0,n);
// }


/* sum of n numbers using recursion with return type */

#include<iostream>
using namespace std;
int sum1toN(int i,int n){
    if(n==0){
        return i;
    }
    sum1toN(i+n,n-1);

}
int main(){
    int n;
    cin>>n;
    cout<<sum1toN(0,n);
}


