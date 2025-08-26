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

vector<int> BottomView(Node* root) {
    vector<int> ans;

    if(root == NULL) return ans;
    map<int,int> mpp;

    queue<pair<Node*,int>> q;
    q.push({root,0});

    while(!q.empty()) {
        auto it = q.front();
        q.pop();

        Node* node = it.first;
        int line = it.second;
        mpp[line] = node->data;

        if(node->left != NULL) {
            q.push({node->left, line - 1});
        }
        if(node->right != NULL) {
            q.push({node->right, line + 1});
        }
    }
    for(auto it : mpp) {
        ans.push_back(it.second);
    }
    return ans;
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