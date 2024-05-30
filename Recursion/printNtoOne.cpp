#include<iostream>
using namespace std;
//using recursion method
void nTOone(int n){
    if(n==0) return;
    cout<<n;
    nTOone(n-1);

}
// normal loop method
void ntoone(int n){
    while (n>0)
    {
        cout<<n<<endl;;
        n--;
    }
    
}
int main(){
    nTOone(5);
    // ntoone(6);

}