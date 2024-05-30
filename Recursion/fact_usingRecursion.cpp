#include<iostream>
using namespace std;
int rec_fact(int n){
    if (n==0 || n==1) //base case
    {
        return 1; 
    }
    //kaam and call
    int ans= n*rec_fact(n-1);
    //return
    return ans; 
}
int main(){
    cout<<rec_fact(5);

    
    
}