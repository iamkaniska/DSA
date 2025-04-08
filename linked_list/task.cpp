#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


    Node(int val){
        data=val;
        next=NULL;
    }
};
int main(){
    Node *x=new Node(5);
    cout<<x->data<<" "<<x->next;

}