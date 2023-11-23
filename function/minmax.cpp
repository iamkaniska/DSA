/* some inbuilt funtion uses..... */

// basic greater number 
// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cin>>x>>y;
//     if (x<y)
//     {
//         cout<<x;
//     }
//     else{
//         cout<< y<<endl;
//     }
// }
// inbuilt greater number...
// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cin>>x>>y;
//     cout<<min(x,y);
// }


//  max inbuilt function...

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cin>>x>>y;
//     cout<<max(x,y);
// }

// max and min using function..

#include<iostream>
using namespace std;
void mini(int x, int y){
    cout<<min(x,y);
}
void maxi(int x,int y){
    cout<<max(x,y);
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<"max will be: "; 
    maxi(x,y);
    cout<<endl;
    cout<<"min mill be: ";
    mini(x,y);

}

