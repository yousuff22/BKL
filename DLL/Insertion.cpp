#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1) {
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
Node* convertarr2ll(vector<int> &arr) {
        Node* head = new Node(arr[0]); 
        Node* prev = head;
        for(int i=1; i<arr.size(); i++) {
            Node* temp = new Node(arr[i],nullptr,prev);
            prev->next = temp;
            prev = temp;
        }
        return head;
    }

void print(Node* head) {
    Node* temp = head;
    while(temp) {
        cout<<temp->data << " ";
        temp = temp->next;
    }
}

Node* insertbeforehead(Node* head , int val) {
    Node* newhead = new Node(val,head,nullptr);
    head->back = newhead;
    return newhead;
}

Node* insertbeforetail(Node* head , int val) {
    if(head->next == nullptr) {
        return insertbeforehead(head,val);
    }
    Node* tail = head;
    while(tail->next != nullptr) {
        tail = tail->next;
    }
    Node* prev = tail->back;
    Node* beforetail = new Node(val,tail,prev);

    prev->next = beforetail;
    tail->back = beforetail;

    return head;
}

Node* insertbeforeKthele(Node* head,int val,int k) {
    if(head == NULL) return NULL;
    if(k == 1) {
        return insertbeforehead(head,val);
    }
    int cnt = 0; Node* temp = head;
    while(temp != NULL) {
        cnt++;
        if(cnt == k){
            break;
        }
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val,temp,prev);
    prev->next = newNode;
    temp->back = newNode;
    
    return head;
}
int main(){
    vector<int> arr = {2,4,6,7};
    Node* head = convertarr2ll(arr);

    head = insertbeforeKthele(head,10,4);
    print(head);


    return 0;
}