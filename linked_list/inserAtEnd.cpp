#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to insert a node at the end
void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;52
    
}

int main() {
    Node* head = NULL;

    insertAtEnd(head, 5);
    insertAtEnd(head, 10);
    insertAtEnd(head, 15);
    insertAtEnd(head, 7);
    insertAtEnd(head, 25);
    insertAtEnd(head, 35);

    printList(head); // Output: 5 -> 10 -> 15 -> NULL

    return 0;
}
