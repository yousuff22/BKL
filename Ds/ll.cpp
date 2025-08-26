
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){};

    Node(int d) {
        data = d;
        next = nullptr;
    }
};

Node* Head(vector<int> arr) {
    Node* head = new Node (arr[0]);

    Node* t = head;
    for(int i = 1; i<arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        t->next = temp;
        t = temp;
    }
    return head;
}

void traversal(Node* Head) {

    while(Head != nullptr) {
        cout << Head->data << " ";
        Head = Head->next;
    }
}

void reversedisplay(Node* node) {
    if(!node) return;
    reversedisplay(node->next);
    cout << node->data << " ";
}
int main() {
    vector<int> arr = {2,3,4};
    vector<int> brr = {9,1,8};
    Node* t1 = Head(arr);
    Node* t2 = Head(brr);

    reversedisplay(t1);
    return 0;
}