// #include<iostream>
// using namespace std;
// class Student {
//     public:
//     string name;
//     int rolNo;
//     float marks;
//     Student(string name,int rolNo,float marks){
//         this->name=name;
//         this->rolNo=rolNo;
//         this->marks=marks;
        
//     }

// };
// int main(){ 
//     Student s("kaniksa",75,99.9);
//     cout<<s.name<<endl;
//     Student *ptr=&s;
//     // (*ptr).name="kaniska"; //both are same
//     ptr->name="sanket"; //both are same
//     cout<<s.name;



// }



// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node*next;

//     Node(int val){
//     this->val=val;
//         next=NULL;
//     }

// };
// int main(){
//     Node *ptr=new Node(5);
//     cout<<ptr->next<<" "<<ptr->val;
// }


#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    float cgpa;

    // Student(){

    // }
    Student(string n,int r,float c){
        name=n;
        roll_no=r;
        cgpa=c;
    }
};
int main(){
    // Student s;
    //instead of these we use constructor
   /*  s.name="kaniska";
    s.cgpa=6.7;
    s.roll_no=1741;
    cout<<s.name<<" "<<s.roll_no<<" "<<s.cgpa<<endl; */ 

    Student p("Kaniska",1730,9.1);
    Student*k=&p;
    cout<<p.name;
    (*k).name=" sunny";
    cout<<p.name;

    // cout<<p.name<<" "<<p.roll_no<<" "<<p.cgpa<<endl;
}