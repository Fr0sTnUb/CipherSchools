#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
class Queue {
private:
    Node* front; 
    Node* rear;   
public:
    Queue() : front(nullptr), rear(nullptr) {}
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
    bool isEmpty() {
        return front == nullptr;
    }
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << value << " enqueued to the queue." << endl;
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Nothing to dequeue." << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        cout << temp->data << " dequeued from the queue." << endl;
        delete temp;
    }
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty. No element to peek." << endl;
            return -1;
        }
        return front->data;
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }      
        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    cout << "Front element: " << q.peek() << endl;
    return 0;
}
