#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }
};

Node* Head(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* tNode = head;
    for(int i = 1; i<arr.size(); i++) {
        Node* temp = new Node(arr[i],nullptr,tNode);
        tNode->next = temp;
        tNode = temp;
    }
    return head;
}

void traversal(Node* head) {
    while(head != nullptr) {
        cout << head->data;
        head = head->next;
    }
}

Node* deleteallOccofKey(Node* head, int key) {

    Node* temp = head;

    while(temp != nullptr) {
        if(temp->data == key) {
            if(head == temp) {
                head = temp->next;
            }
            Node* prevNode = temp->back;
            Node* frontNode = temp->next;
            
            if(prevNode != NULL) prevNode->next = frontNode;
            if(frontNode != NULL) frontNode->back = prevNode;
            
        }
        temp = temp->next;
    }
    return head;
}

int main() {
    vector<int> arr = {2,4,5,6,2,3,7,2};
    Node* head = Head(arr);
    traversal(deleteallOccofKey(head,2));
    return 0;
}