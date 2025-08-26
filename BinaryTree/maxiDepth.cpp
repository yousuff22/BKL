#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node() {};

    Node(int d) {
        data = d;
        left = nullptr;
        right = nullptr;
    }

    Node(int d, Node* l, Node* r) {
        data = d;
        left = l;
        right = r;
    }
};

int maxxdepth(Node* root) {
    if(root == NULL) return 0;


    int lh = maxxdepth(root->left);
    int rh = maxxdepth(root->right);

    return 1 + max(lh,rh);

}
int main() {

    Node* root = new Node(0);
    root->left = new Node(2);
    root->right = new Node(4);
    root->left->left = new Node(7);
    root->left->left->left = new Node(8);

    cout << maxxdepth(root);
    return 0;
}