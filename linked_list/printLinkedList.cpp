
/* 1,2,4,5,6,7,8 */
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

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;

    printList(a);






}