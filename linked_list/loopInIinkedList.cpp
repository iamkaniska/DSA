// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int data){
//         this->data=data;
//         next=NULL;
//     }

// };
// int main(){
//     Node a(10);
//     Node b(20);
//     Node c(30);
//     Node d(40);
//     Node* e=new Node(60);
//     Node* f=new Node(70);
//     e->next=f;
//     a.next=&b;
//     b.next=&c;
//     c.next=&d;
//     // cout<<b.data<<" "<<(a.next)->data<<endl;
//     Node temp=a;
//     while(1){
//         cout<<temp.data<<" ";
//         if(temp.next==NULL) break;
//         temp=*(temp.next);
//     }

// }


/* --------------------------------------------------------------------------------------------------------------- */




#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data=data;
        next=NULL;
    }

};
int main(){
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;
    Node* temp=a;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}



/* ------------------------------------------------------------------------------------ */

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;

//     Node(int data){
//         this->data=data;
//         next=NULL;
//     }

// };
// int main(){
//    Node a(10);
//    Node b(20);
//    Node c(30);
//    Node d(40);

//     a.next=&b;
//     b.next=&c;
//     c.next=&d;
//     Node temp=a;
//     // while(temp.next!=NULL){
//     //     cout<<temp.data<<" ";
//     //     temp=(*temp.next);
//     // }
//     cout<<(*(*(*a.next).next).next).data<<endl;


// }