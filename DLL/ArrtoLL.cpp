#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

    public:
    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

};

Node* convertarrtoDLL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<arr.size(); i++) {
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void prints(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* deletehead(Node* head) {
    // if DLL is empty of single ele
    if(head == NULL || head->next == NULL) {
        return NULL;
    }

    //if DLL has more then one ele
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

Node* deletetail(Node* head) {
    if(head == NULL || head->next == NULL)  {
        return NULL;
    }
    Node* tail = head;
    while(tail->next !=  NULL){
        tail = tail->next;
    }
    Node* newtail = tail->back;
    newtail->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

Node* middlenode(Node* head) {
    if(head == NULL) {
        return NULL;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    int middle = 0;
    // for odd
    if(cnt%2 == 0) {
        middle = (cnt+1)/2;
    }
    // for even
    else {
        middle = ((cnt+1)/2 )+ 1;
    }
    Node* mid = head;
    while(mid != NULL) {
        temp = temp->next;
        middle = middle-1;
        if(middle == 0) {
            return temp;
        }
    }
}

int main() {
    vector<int> arr = {12,5,8,7};
    Node* head = convertarrtoDLL(arr);
     
    head = middlenode(head);
    prints(head);



    return 0;
}