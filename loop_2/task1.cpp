// Prime Number
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<< "Enter Number : ";
    cin>> n;
    int temp = 0;
    //7
    for ( i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
        temp = 1;
        break;  
        }
    }
        if(temp == 0)
        cout<<"prime"; 
             // prime
        else{
            cout<<"not prime";
        }
        //not prime
    }

   
    
    
    
    
