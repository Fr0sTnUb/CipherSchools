#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int val){
        this -> data = val;
        next = NULL;
    }
};

void insertElem(Node* &head, int val){
    Node* n = new Node(val);
    if (head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
}

void displayList(Node* head){
    Node* temp = head;
    while(temp -> next != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << temp -> data;
}

int main(){
    Node* head = NULL;
    insertElem(head, 10);
    insertElem(head, 20);
    insertElem(head, 30);
    insertElem(head, 40);
    displayList(head);
    return 0;
}