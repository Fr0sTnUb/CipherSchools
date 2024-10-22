#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode* oddEvenList(ListNode* head) {
    if (!head || !head->next) return head;
    ListNode *odd = head, *even = head->next, *evenHead = even;
    while (even && even->next) {
        odd->next = even->next;  
        odd = odd->next;
        even->next = odd->next;  
        even = even->next;
    }

    odd->next = evenHead; 
    return head;
}

void insert(ListNode*& head, int value) {
    ListNode* newNode = new ListNode(value);
    if (!head) {
        head = newNode;
    } else {
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = nullptr;
    int n, value;
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;
    cout << "Enter the elements of the linked list: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        insert(head, value);
    }
    head = oddEvenList(head);
    cout << "Reordered list: ";
    printList(head);

    return 0;
}
