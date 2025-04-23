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
/* display function  */
void display(Node* a){ 
    Node* temp=a;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
/* display with recursion */

void displayRec(Node* head){
    if(head==NULL) return;
    cout<<head->data<<" ";
    displayRec(head->next);
}

/* count function */
int length(Node* b){
    Node* temp=b;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    cout<<endl;
    return count;
}
int main(){
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;
    display(a);
    cout<<length(a);
    displayRec(a);


}


