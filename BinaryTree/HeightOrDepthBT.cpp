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

int depthofBT(Node* root) {
    if(root == NULL) return 0;

    int left = depthofBT(root->left);
    int right = depthofBT(root->right);

    int ans = max(left,right) + 1;
    return ans;
}

int main() {

    Node* root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(5);
    root->left->left = new Node(7);

    cout << depthofBT(root);
    return 0;
}