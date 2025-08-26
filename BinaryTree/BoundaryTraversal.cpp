#include<iostream>
#include<vector>
#include<stack>
#include<queue>
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


Node* BuildingBT(Node* root) {

    cout << "Enter the data : ";
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1) return NULL;

    cout << "Enter data for left of " << data << endl;
    root->left = BuildingBT(root->left);
    cout << "Enter data for right of " << data << endl;
    root->right = BuildingBT(root->right);

    return root;
}

void traversalLeft(Node* root, vector<int>& ans) {
    if(root == NULL || (root->left == nullptr and root->right == nullptr)) {
        return;
    }

    ans.push_back(root->data);

    if(root->left) {
        traversalLeft(root->left, ans);
    }
    else {
        traversalLeft(root->right, ans);
    }
}

void traversalLeaf(Node* root, vector<int>& ans) {
    if(root == NULL) {
        return;
    }

    if(root->left == nullptr and root->right == nullptr) {
        ans.push_back(root->data);
        return;
    }
    traversalLeaf(root->left, ans);
    traversalLeaf(root->right, ans); 
}

void traverseRightPart(Node* root, vector<int>& ans) {
    if(root == NULL || (root->left == nullptr and root->right == nullptr)) {
        return;
    }

    if(root->right) {
        traverseRightPart(root->right,ans);
    }
    else {
        traverseRightPart(root->left,ans);
    }

    ans.push_back(root->data);
}

vector<int> boundary(Node* root) {

    vector<int> ans;
    if(root == NULL) return ans;

    ans.push_back(root->data);

    // Left Part 
    traversalLeft(root->left,ans);

    // Traverse Leaf Node

    // left subtree
    traversalLeaf(root->left,ans);

    // roght subtree
    traversalLeaf(root->right,ans);

    // Traverse RightPart

    traverseRightPart(root->right,ans);

    return ans;
}

int main() {
    Node* Root = new Node(1);
    Root->left = new Node(2);
    Root->right = new Node(3);
    Root->left->left = new Node(5);
    Root->left->left->left = new Node(7);

    Root->left->right = new Node(9);

    // // cout << Root->data << endl;
    // // cout << Root->left->data << endl;
    // // cout << Root->right->data << endl;

    // Root->left->right = new Node(4);

    // vector<int> ans = preorderTraversal(Root);

    // for(int x : ans) {
    //     cout << x << " ";
    // }

    vector<int> ans = boundary(Root);

    for(int x : ans) cout << x << " " ;
    return 0;
}