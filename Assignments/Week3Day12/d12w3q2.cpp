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

void insertAtEnd(Node* &head, int data){
    Node* n = new Node(data);
    if (head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp -> next != NULL)
        temp = temp -> next;
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
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    cout << "Linked list before addition of new data: ";
    displayList(head);
    cout << endl;
    cout << "Enter a new data to be added at the end: ";
    int n;
    cin >> n;
    insertAtEnd(head, n);
    cout << "Linked list after addition of new data: ";
    displayList(head);
    return 0;
}