// #include<iostream>
// using namespace std;
// void increase(int n){
//     if(n==0){
//         return;
//     }
//     //cout<<n<<" ";
//     increase(n-1);
//     cout<<n<<" ";

// }
// int main(){
//     int n;
//     cin>>n;
//     increase(n);
// }




#include<iostream>
using namespace std;
void increase(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    increase(i+1,n);
    if(i>1) cout<<i-1<<" ";
    //cout<<i<<" ";

}
int main(){
    int n;
    cin>>n;
    increase(1,n);
}