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



#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;

    Node(int val){
    this->val=val;
        next=NULL;
    }

};
int main(){
    Node *ptr=new Node(5);
    cout<<ptr->next<<" "<<ptr->val;
}