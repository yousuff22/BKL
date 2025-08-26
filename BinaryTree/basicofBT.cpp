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

void Inorder(Node* root) {
    if(root == NULL) return;
    
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
     
}

void Preorder(Node* root) {
    if(root == NULL) return;

    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);

}

void Postorder(Node* root) {
    if(root == NULL) return;

    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
}

vector<int> preorderTraversal(Node* root) {

    vector<int> preorder;

    if(root == NULL) return preorder;

    stack <Node*> st;
    st.push(root);

    while(!st.empty()) {
        root = st.top();
        st.pop();

        preorder.push_back(root->data);
        if(root->right != nullptr) {
            st.push(root->right);
        }
        if(root->left != nullptr) {
            st.push(root->left);
        }
    }
    return preorder;
}

vector<int> inorderTraversal(Node* root) {
    stack<Node*> st;

    Node* node = root;
    vector<int> inorder;

    while(true) {
        if(node != NULL) {
            st.push(node);
            node = node->left;
        }
        else {
            if(st.empty() == true) break;
            node = st.top();
            st.pop();
            inorder.push_back(node->data);
            node = node->right;
        }
    }
    return inorder;
}

void lvlOrdertraversal(Node* root) {

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            cout << endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }

        else {
            cout << temp->data << " ";
            if(temp->left) {
                q.push(temp->left);
            }
            if(temp->right) {
                q.push(temp->right);
            }
        }
    }
}

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

    lvlOrdertraversal(root);
    return 0;
}