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
    cout<<n->data<<" "<<n->next<<endl;
}
void InsertAtHead(){

}

int main(){
    Node* a=new Node(1);
    Node* a=new Node(2);
    Node* a=new Node(3);
    Node* a=new Node(4);
    Node* a=new Node(5);
    print(a);


}