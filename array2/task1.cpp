#include<iostream>
using namespace std;
void display(int arr[]){
    for (int i = 0; i <=4; i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}
void change(int b[]){
    b[0]=200;
    cout<<b[0];
}

int main(){
    int arr[5]={1,2,3,4,5};
    display(arr);
    cout<<endl;
    change(arr);
    cout<<endl;
    display(arr);
    

}