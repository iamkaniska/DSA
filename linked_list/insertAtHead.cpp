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
void print(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
    cout<<endl;
   
};
void insertHead(Node*& head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode; // Update the actual head pointer
}

int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    print(a);
    insertHead(a,90);
    print(a);



}