#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(){};

    Node(int data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }

    Node(int data1, Node* prev1, Node* next1) {
        data = data1;
        prev = prev1;
        next = next1;
    }
    
};

// Converted Array into DLL..
Node* Head(vector <int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++) {
        Node* temp = new Node(arr[i],mover,nullptr);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

// Tail
Node* Tail(Node* head) {
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    return temp;
}

// Print 
void print(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// Insertion at head
Node* insertathead(Node* head, int ele) {
    Node* newhead = new Node(ele,nullptr,head);
    head->prev = newhead;
    return newhead;
}

// deletion at head
Node* deletehead(Node* head) {
    // If DLL is empty Or Single Node
    if(head == NULL || head->next == nullptr){
        return NULL;
    }

    Node* newhead = head->next;
    head->next = nullptr;
    newhead->prev = nullptr;
    delete head;
    return newhead;
}

// Insertion at tail
Node* insertatTail(Node* head, int ele){
    Node* temp = head;
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    Node* newtail = new Node(ele,temp,nullptr);
    temp->next = newtail;
    return head;
}

// deletion at Tail
Node* deleteTail(Node* head) {
    if(head == NULL || head->next == nullptr) {
        return NULL;
    }
    Node* temp = head;
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    Node* newtail = temp->prev;
    newtail->next = nullptr;
    temp->prev = nullptr;
    delete temp;
}
int main() {
    vector <int> arr = {2,5,7,8,9};

    Node* head = Head(arr);
    // cout << head->next->prev->data;

    // Node* newhead = insertathead(head,10);
    // cout<< newhead->next->prev->data;
    // print(newhead);

    // Node* tail = Tail(head);
    // // cout << tail->data;
   
    return 0;
}