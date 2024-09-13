#include<iostream>
using namespace std;
struct student{
    string name;
    int roll_no;
    int age;
    void details(){
        cout<<name<<endl;
        cout<<roll_no<<endl;
        cout<<age<<endl;
    }
};
int main(){
    student prince;
    prince.name="kaniska";
    prince.roll_no=21;
    prince.age=21;
    cout<<prince.name<<endl; //use for specific print
    prince.details(); //create a function to show all values
    student pratik={"kabir",212,31}; //another method to print
    pratik.details();



}