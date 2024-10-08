#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int data){
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

void insertAtTail(int data, node* &head){
    node* n = new node(data);
    if (head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = n;
    n->prev = temp;
}

void insertAtPos(int data, int pos, node* &head){
    node* n = new node(data);
    node* temp = head;
    int count = 0;
    while(count != pos){
        temp = temp->next;
        ++count;
    }
    n->next = temp->next;
    n->prev = temp;
    temp->next = n;
    n->next->prev = n;
}

display(node* head){
    node* temp = head;
    while(temp -> next != NULL){
        cout << temp -> data << " <-> ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}

int main(){
    node* head = NULL;
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        int data;
        cin >> data;
        insertAtTail(data, head);
    }
    display(head);
    int d, index;
    cout << "Enter the node you want to add: ";
    cin >> d;
    cout << "Enter after which position you want to add: ";
    cin >> index;
    insertAtPos(d, index, head);
    display(head);
    return 0;
}