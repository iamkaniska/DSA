#include<iostream>
using namespace std;
void loop(int x){
    if (x==0)
    {
       return;
    }
    
    cout<<"kaniska"<<endl;
    loop(x-1);
}
int main(){
    loop(3);

}