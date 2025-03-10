/* without recursion */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int first=1, second =1,next,sum=0;
//     for(int i=0;i<n;i++){
//         cout<<first<<" ";
//         sum+=first;
//         next=first+second;
//         first=second;
//         second=next;
//     }
//     cout<<endl;
//     cout<<"sum of fibonnaci "<<next;
// }

/* with recursion */
// #include<iostream>
// using namespace std;
// int fibbo(int n){
//     // if(n==1 || n==2){
//     //     return 1;
//     // }
// // or this case
//   //  if(n==0) return 0;
//  //    if(n==1) return 1;
//     return(fibbo(n-1)+fibbo(n-2));
// }
// int main(){
//     int n;
//     cout<<fibbo(4);
// }

/* this is another term */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first=0, second =1,next,sum=0;
    for(int i=2;i<=n;i++){
        sum+=first;
        next=first+second;
        first=second;
        second=next;
        cout<<first<<" ";
    }
    cout<<endl;
    cout<<"sum of fibonnaci "<<second;
}