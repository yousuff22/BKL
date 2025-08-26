#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<map>
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

void recursion(Node* root, int lvl, vector<int>& res) {
    if(root == NULL) return;
    if(res.size() == lvl) res.push_back(root->data);

    recursion(root->right, lvl+1, res);
    recursion(root->left, lvl+1, res);
}

vector<int> RightView(Node* root) {
    vector<int> res;
    recursion(root,0,res);

    return res;
}

int main() {
    // Node* Root = new Node(1);
    // Root->left = new Node(2);
    // Root->right = new Node(3);

    // // cout << Root->data << endl;
    // // cout << Root->left->data << endl;
    // // cout << Root->right->data << endl;

    // Root->left->right = new Node(4);

    // vector<int> ans = preorderTraversal(Root);

    // for(int x : ans) {
    //     cout << x << " ";
    // }

    Node* root = NULL;

    root = BuildingBT(root);

    return 0;
}