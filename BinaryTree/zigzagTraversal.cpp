#include<iostream>
#include<vector>
#include<queue>
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

vector<vector<int>> zigzagLvlOrderTraversal(Node* root) {
    vector<vector<int>> result;

    if(root == NULL) return result;

    queue<Node*> q;
    q.push(root);
    bool LefttoRight = true;

    while(!q.empty()) {
        int size = q.size();
        vector<int> ans(size);

        for(int i = 0; i<size; i++) {
            Node* node = q.front();
            q.pop();

            int index = (LefttoRight) ? i : (size - 1 - i);

            ans[index] = node->data;

            if(node->left) {
                q.push(node->left);
            }
            if(node->right) {
                q.push(node->right);
            }
        }
        LefttoRight = !LefttoRight;
        result.push_back(ans);
    }

    return result;
}

bool isSameTree(Node* t1, Node* t2) {
    if(t1 == NULL || t2 == NULL) return (t1==t2);

    return (t1->data == t2->data)
    && isSameTree(t1->left, t2->left)
    && isSameTree(t1->right, t2->right);
}   

int main() {
    
    Node* root = new Node(20);

    root->left = new Node(5);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->left->right = new Node(4);

    zigzagLvlOrderTraversal(root);
    return 0;   
}