/* delete Node from a linkedlist */
/* #include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
// void DeleteNode(Node* temp){

//     temp->data=temp->next->data;
//     temp->next=temp->next->next;

// }
void Deletenode(Node* head,int x){
    Node* temp=head;
    int idx=0;
    while(idx<x-1){
        temp=temp->next;
        idx++;
    } 
    temp->next=temp->next->next;

}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    Node* f=new Node(60);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=NULL;
    display(a);
    // DeleteNode(d);
    Deletenode(a,2);
    display(a);


} */

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
void display(Node* head){
    while(head!=NULL){
        head=head->next;
        cout<<head->data<<" ";
    }
    cout<<endl;
}
void deleteNode(Node* temp){
    temp->data=temp->next->data;
    temp->next=temp->next->next;
}
int main(){
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    Node* e= new Node(50);
    Node* f= new Node(60);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=NULL;
    display(a);
    deleteNode(b);
    display(a);

}
