/*
12345
12345
12345
12345
12345
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a Number: ";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<j;
//         } 
//         cout<<endl;
//     }
    
// }

/*
1
12
123
1234
12345
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a Number: ";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<j;
//         } 
//         cout<<endl;
//     }
    
// }

/*
*
**
***
****
*****
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a Number: ";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         } 
//         cout<<endl;
//     }
    
// }

/*
*****
****
***
**
*
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a Number: ";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j <= n; j++)
//         {
//             cout<<"*";
//         } 
//         cout<<endl;
//     }
    
// }

/*
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a Number: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<(char)(j+64)<<" ";
        } 
        cout<<endl;
    }
    
}