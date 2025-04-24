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
// void display(Node* a){
//     if(a==NULL) return;
//         cout<<a->data<<" ";
//         display(a->next);
// }

void displayTwo(Node* a){
    while(a!=NULL){
        cout<<a->data<<" ";
        a=a->next;
    }
    cout<<endl;
}
void insertEnd(Node* a, int n){
    Node* add=new Node(n);
    while(a->next!=NULL){
        a=a->next;
    }
    a->next=add;
};
void insertHead(Node*& head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode; // Update the actual head pointer
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
    
    displayTwo(a);
    // insertEnd(a,90);
    // displayTwo(a);
    insertHead(a,80);
    displayTwo(a);

    

}