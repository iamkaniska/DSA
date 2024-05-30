/* print one to N with extra parameter */
// #include<iostream>
// using namespace std;
// void algo(int i, int n){
//     if (i>n)
//     {
//         return;
//     }
//     cout<<i<<endl;
//     algo(i+1,n);
    
// }
// int main(){
//     int n;
//     cin>>n;
//     algo(1,n);

// }

/* print one to N using recursion */

#include<iostream>
using namespace std;
void nTOone(int n){
    if(n==0) return; //base case
    nTOone(n-1); //call
    cout<<n<<endl; //kaam

}
int main(){
    nTOone(5);
   

}