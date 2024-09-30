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
    Node *n = new Node(val);
    if (head == NULL){
        head = n;
        return;
    }
    Node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
}

void Deletion(Node* &head, int key){
    Node *temp = head;
    if (head == NULL)
        return;
    if (head -> data == key){
        Node* del = head;
        head = head -> next;
        delete del;
        return;
    }
    while(temp -> next != NULL && temp -> next -> data != key)
        temp = temp -> next;
    if (temp -> next -> data == key){
        Node* del = temp -> next;
        temp -> next = temp -> next -> next;
        delete del;
    }
}

void displayLinkedList(Node* head){
    Node* temp = head;
    if (head == NULL)
        return;
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
            insertElem(head, n);
        }
    }while(c != 'n');
    displayLinkedList(head);
    int key;
    cout << "Enter the node to delete: ";
    cin >> key;
    Deletion(head, key);
    displayLinkedList(head);
    return 0;
}