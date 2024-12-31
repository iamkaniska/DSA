#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int roll_no;
    int marks;

    Student(){ //default constructor // we use it for run objects with constructor and without constructor

    };
    Student(string s,int r,int m){ // parameterized constructor
        name=s;
        roll_no=r;
        marks=m;
    }
};

int main(){
    Student A("Kaniksa",32,100); // with constructor

    Student B; // run without constructor 
    B.name ="Kaniska Maity";
    B.roll_no=21;
    B.marks=90;

    //swithcing
    Student C=A;
    C.name="kannan"; //deep copy, its actullay pass by value not reference like using & operator


    Student D(A); //copy constructor
    D.name="kapil"; //deep copy

    
    cout<<A.marks<<" "<<A.name<<" "<<A.roll_no<<endl;
    cout<<B.marks<<" "<<B.name<<" "<<B.roll_no<<endl;
     cout<<C.marks<<" "<<C.name<<" "<<C.roll_no<<endl;
    cout<<D.marks<<" "<<D.name<<" "<<D.roll_no<<endl;



}