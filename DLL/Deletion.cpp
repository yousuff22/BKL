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
        while(temp != NULL) {
            cout<<temp->data << " " ;
            temp = temp->next;
        }
    }

    Node* deletehead(Node* head) {
        if(head == NULL || head->next == nullptr) {
            return NULL;
        }
        Node* temp = head;
        head = temp->next;
        head->back = nullptr;
        temp->next = nullptr;
        free(temp);
        return head;
    }

    Node* deletetail(Node* head) {
        if(head == NULL || head->next == nullptr) {
            return NULL;
        }
        Node* temp = head;
        
        while(temp->next != nullptr) {
            temp = temp->next;
            }
            Node* newtail = temp->back;
            newtail->next = nullptr;
            temp->back = nullptr;
            delete temp;
            return head;
        }
    
    Node* deletekele(Node* head,int k) {
        if(head == NULL) {
            return NULL;
        }
        int cnt = 0; Node* temp = head;
        while(temp != NULL) {
            cnt++;
            if(cnt == k) break;
            temp = temp->next;
        }

        Node* prev = temp->back;
        Node* front = temp->next;
        

        if(prev == nullptr && front == nullptr) {
            return NULL;
        }

        else if(prev == nullptr) {
            return deletehead(head);
        }

        else if(front == nullptr) {
            return deletetail(head);
        }

        prev->next = front;
        front->back = prev;

        temp->next = temp->back = nullptr;
        delete temp;
        return head;
    }

    void deleteNode(Node* temp) {
        Node* prev = temp->back;
        Node* front = temp->next;

        if(front == nullptr) {
            prev->next = nullptr;
            temp->back = nullptr;
            free(temp);
        }

        prev->next = front;
        front->back = prev;
        temp->next = temp->back = nullptr;
        free(temp);
    }

int main(){
    vector<int> arr = {2,4,6,7};
    Node* head = convertarr2ll(arr);

    deleteNode(head->next->next);
    print(head);


    return 0;
}