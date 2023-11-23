/*
1
12
123
1234
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "Enter Number: ";
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//     {
//         cout<<j;
//     }
//     cout<<endl;
//         }    
// }

/*
1
13
135
1357
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter Number: ";
    cin>>n;
    int a=1;
    for (int j = 1; j <= n; j++)
    {
        for(int i=1;i<=n;i++){
        cout<<i;
        i=i+1;
        }
        cout<<endl;
    }   
}  

