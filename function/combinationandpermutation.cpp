/*  combination in normanl process...
 */

// #include<iostream>
// using namespace std;
// int main(){
//     int n,k=1,m;
//     cout<<"Enter N Number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         k=k*i;
//     }
//     cout<<"the N factorial is: "<<k<<endl; // n!
//     int n1,k1=1;
//     cout<<"Enter R Number: ";
//     cin>>n1;
//     for(int i=1;i<=n1;i++){
//         k1=k1*i;
//     }
//     cout<<"the R factorial is: "<<k1<<endl; //r!
//     int k2,m1=1;
//     k2=n-n1;
//     for(int i=1;i<=k2;i++){
//         m1=m1*i;
//     }
//     m=k/(k1*m1); 
//     cout<<"the factorial combination is: "<<m<<endl; // n!/(n-r)!
    
// }

/* combination & permutution using function.. */
#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int combination(int n,int r){
    int npr=fact(n)/(fact(r)*fact(n-r));
    return npr;
    }
int permutution(int n,int r){
    int npr=fact(n)/fact(n-r);
    return npr;
    }
int main(){
    int n;
    cout<<"enter N value: ";
    cin>>n;
    int r;
    cout<<"enter R value: ";
    cin>>r;
    // int nfact=fact(n);
    // int rfact=fact(r);
    // int nrfact=fact(n-r);
    // int ncr=nfact/(rfact*nrfact);
    int ncr=combination(n,r);
    int npr=permutution(n,r);
    cout<<"Combination is: "<<ncr<<" permutution is: "<<npr<<endl;
}


