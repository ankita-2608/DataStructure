#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* LCA(Node* root, int n1, int n2) {
    if(root == NULL) return NULL;
  
    if(root->data > n1 && root->data > n2) return LCA(root->left, n1, n2);
  
    if(root->data < n1 && root->data < n2) return LCA(root->right, n1, n2);
  
    return root;
}

int main() {
    Node* p = new Node(5);
    Node* p1 = new Node(3);
    Node* p2 = new Node(6);
    Node* p3 = new Node(2);
    Node* p4 = new Node(4);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    Node* lca = LCA(p, 2, 4);
  
    if(lca != NULL) {
        cout<<lca->data;
    }
    else {
        cout<<"LCA not found";
    }

    //cout<<LCA(p, 2, 4)->data;

    return 0;
}
