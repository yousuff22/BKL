#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

Node* bulidingBT(Node* root) {

    cout << "Enter data : ";
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1) return NULL;

    cout << "Enter data for left of " << data << endl;
    root->left = bulidingBT(root->left);

    cout << "Enter data for right of " << data << endl;
    root->right = bulidingBT(root->right);

    return root;
}

void inorder(Node* root,int& cnt) {

    if(root == NULL) return;

    inorder(root->left, cnt);
    
    if(root->left == nullptr and root->right == nullptr) cnt++;

    inorder(root->right, cnt);
}   

int countleafnode(Node* root) {
    int cnt = 0;
    inorder(root,cnt);

    return cnt;
}
int main() {
    
    Node* root = new Node(20);

    root->left = new Node(5);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->left->right = new Node(4);

    cout << countleafnode(root);
    return 0;   
}