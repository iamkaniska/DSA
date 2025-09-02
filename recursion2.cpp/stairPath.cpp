/* stair path with 1 and 2 jump */
#include<iostream>
using namespace std;
int stair(int n){
    if(n==1 || n==0) return 1;
   if(n==2) return 2;
    return(stair(n-1)+stair(n-2));
}
int main(){
    cout<<stair(2);
}
/* 
lets take n=4
n=4
(n-1)+(n-2) -> 3 +2
(n-1)+(n-2) + (n-1)+(n-2) -> (2 +1) + (1+0)
for 2 =2 and for 1 and 0 =1;
2+1+1+1 = 4
 */