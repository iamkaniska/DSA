#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int roll_no;
    int marks;
};
void print(Student A){
    cout<<A.marks<<" "<<A.name<<" "<<A.roll_no<<endl;
};
void change(Student& anna){
    anna.name ="anna Maity";
    anna.roll_no=1;
    anna.marks=80;
};
int main(){
    Student A;
    A.name ="Kaniska Maity";
    A.roll_no=21;
    A.marks=90;
    // cout<<A.marks<<" "<<A.name<<" "<<A.roll_no;
    Student B;
    B.name ="Kaniska Maity";
    B.roll_no=21;
    B.marks=90;
    print(A);
    change(A);
    print(A);


    // print (B);



}