// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;


//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// int main(){
//     Node *x=new Node(5);
//     cout<<x->data<<" "<<x->next;

// }


#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int n){
        data=n;
    }
};
void print(Node s){
    cout<<s.data<<" "<<s.next<<endl;
}  
int main(){
    Node a(5);
    Node b(6);
    Node c(7);
    Node d(8);
    // print(a);
    // print(b);
    // print(c);
    // print(d);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    // cout<<b.data<<" "<<(*a.next).data<<endl;
    // cout<<b.data<<" "<<a.next->data;
    cout<<(*(*(*a.next).next).next).data<<endl;
    cout<<(((a.next)->next)->next)->data;


}