/* make a function which calculate the factorial of n using recursion */
#include<iostream>
using namespace std;
int loop(int x){
    int n=1;
    for (int i = 1; i <= x; i++)
    {
        n=n*i;
    }
    return n;
    
}
void loop2(int x){
    int n=1;
    for (int i = 1; i <= x; i++)
    {
        n=n*i;
        cout<<n<<endl;
    }
    cout<<n<<endl;
    
}
int main(){
    cout<<"return fucntion "<< loop(5);
    cout<<endl;
    cout<<"without return ";
    cout<<endl;
    loop2(5);

}