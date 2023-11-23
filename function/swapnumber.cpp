#include<iostream>
using namespace std;
void swap(int a,int b){
    cin>>a>>b;
    int c=a;
    a=b;
    b=c;
}
int main(){
    swap(4,5);
}