#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

};
class Mystack {
    public:

    Node* head;
    int stsize;

    Mystack() {
        head = NULL;
        stsize = 0;
    }

    void push(int g) {
        Node* temp = new Node();
        temp->data = g;
        temp->next = head;
        head = temp;

        cout << "Pushed" << endl;
        stsize++;
    }

    int top() {
        if(head == NULL) {
            cout << "Stack is Empty";
            return -1;  
        }
        cout << "Top Element " << head->data << endl;
        return head->data;
    }

    void pop() {
        if(head == nullptr) cout << "UnderFlow ";

        Node* temp = head;
        head = temp->next;
        temp->next = nullptr;
        
        delete temp;

        cout << "PoPed";
        stsize--;
    }

    int size() {
        return stsize;
    }
};

int main() {
    Mystack s1;
    s1.push(5);
    s1.push(4);
    s1.top();
    s1.pop();
    s1.top();
    return 0;
}