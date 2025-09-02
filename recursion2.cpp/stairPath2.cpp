/* for 1 and 2 and 3 step taking stairs */
#include<iostream>
using namespace std;
int stair(int n){
    if(n==0 || n==1) return 1;
    if(n==2) return 2;
    return (stair(n-1)+stair(n-2)+stair(n-3));
}
int main(){
    cout<<stair(5);
}