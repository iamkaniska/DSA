/* basic sum using function */
// #include<iostream>
// using namespace std;
// int sum(int x,int y){
//     int n=x+y;
//     return n;
// }
// int main(){
//     cout<<sum(3,5);

// }
/* take user input using sum */
#include<iostream>
using namespace std;
int sum(int x,int y){
    int n=x+y;
    return n;
}
int main(){
    int x,y;
    cout<<"Enter 2 number: ";
    cin>>x>>y;
    cout<<sum(x,y);

}