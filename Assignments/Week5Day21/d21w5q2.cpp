#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
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
}

bool detectCycle(node* head){
    node* slow = head;
    node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
            return true;
    }
    return false;
}

int main(){
    node* head = NULL;
    insertAtTail(3, head);
    insertAtTail(2, head);
    insertAtTail(0, head);
    insertAtTail(-4, head);
    node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = head;
    if (detectCycle(head))
        cout << "true";
    else
        cout << "false";
    return 0;
}