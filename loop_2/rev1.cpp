// revernse Number >>>>>>


#include<iostream>
using namespace std;
int main(){
    int a=0,n;
    int rev=0;
    int reminder;
    cout<<"Enter a Number: ";
    cin>>n;
    while (n!=0)
    {
        a=a*10; 
        reminder=n%10; 
        a+=reminder;
        n/=10;        
    }
    cout<<a;
    
}