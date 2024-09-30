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

void insertAtEnd(Node* &head, int val){
    Node* n = new Node(val);
    if (head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while (temp -> next != NULL)
        temp = temp -> next;
    temp -> next = n;
}

void insertSorted(Node* &head, int val){
    Node* n = new Node(val);
    if (head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    if (head -> data > n -> data){
        n -> next = head;
        head = n;
        return;
    }
    while(temp -> next != NULL && temp -> next -> data <= val)
        temp = temp -> next;
    if (temp -> next != NULL){
        n -> next = temp -> next;
        temp -> next = n;
    }else{
        temp -> next = n;
    }
}

void displayLinkedList(Node* head){
    Node* temp = head;
    while(temp -> next != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << temp -> data << endl;
}

int main(){
    Node* head = NULL;
    char c;
    do{
        cout << "Enter y if you want to add a node else enter n: ";
        cin >> c;
        if (c == 'y'){
            int n;
            cout << "Enter number: ";
            cin >> n;
            insertAtEnd(head, n);
        }
    }while(c != 'n');
    displayLinkedList(head);
    int newElem;
    cout << "Enter the new element: ";
    cin >> newElem;
    insertSorted(head, newElem);
    displayLinkedList(head);
    return 0;
}