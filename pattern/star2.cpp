/*
****
***
**
*
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "Enter Number: ";
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = i; j <= n; j++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
//         }    
// }

#include<iostream>
using namespace std;


// question
// ***
//  **
//   *


// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j = 0; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }    

// question
//   *
//   *
// *****
//   *


int main(){ //plus print --------
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(n/2==j && i!=n/2){
                cout<<"*";
            }
            else{
                if(i!=n/2)
                    cout<<" ";
            }
        }
        if(i==n/2){
            for(int j=0; j<n; j++){
                cout<<"*";
            }
            cout<<" ";
        }
        cout<<endl;
    }
}