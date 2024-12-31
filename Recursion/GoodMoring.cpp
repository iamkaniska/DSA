/* print good morning n number of times where n is user input */
#include<iostream>
using namespace std;
void task(int n){
    if(n==0){
        return;
    }
    cout<<"Good Morning"<<endl;
    task(n-1);
}
int main(){
    int n;
    cin>>n;
    task(n);
}