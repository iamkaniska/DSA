// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     node *next;


//     node(int n){
//         data=n;
//         next=NULL;
//     }

// };
// //linked list
// void printList(node *n){
//     while(n!=NULL){
//         cout<<n->data<<" "<<n->next<<endl;
//         n=n->next;

//     }
// }
// int main(){
//     node *head=new node(5);
//     node *second=new node(20);
//     node *third=new node(10);

    
//     // head->data=5;
//     head->next=second; 

//     // second->data=10;
//     second->next=third;

//     // third->data=20;
//     third->next=NULL;  

//     printList(head);



// }



#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int n){
        data=n;
        next=NULL;
    }   

};
int main(){

    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    cout<<a.data<<" "<<a.next<<endl;
    //a.data=20; // //pass by reference
    //cout<<a.data<<" "<<a.next<<endl;

    a.next=&b;
    b.next=&c;
    c.next=&d;
    cout<<a.data<<" "<<a.next<<endl;
    cout<<b.data<<" "<<b.next<<endl;
    // cout<<b.data<<endl;
    // cout<<(*(*a.next).next).data;
}



