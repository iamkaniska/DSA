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

void display(Node* x){
    while(x!=NULL){
        cout<<x->data<<" ";
        x=x->next;
    }   
    cout<<endl;
}
void InsertAtHead(Node* &head, int y){
        Node* add=new Node(y);
        add->next=head;
        head=add;
        
};
void InsertAtEnd(Node* &head, int z){
        Node* add= new Node(z);
        while(head->next!=NULL){
            head=head->next;
        }
        head->next=add;    
}

int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=NULL;
    display(a);
    InsertAtHead(a, 80);
    display(a);
    InsertAtEnd(b,100);
    display(a);


}