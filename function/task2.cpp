/* no return function */

#include<iostream>
using namespace std;
void abc(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int  j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;     
    }
}
int main(){
    cout<<3<<endl;
    abc(3);
    cout<<5<<endl;
    abc(5);
    cout<<7<<endl;
    abc(7);
}

