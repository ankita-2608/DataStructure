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

int height(Node* root) {
    if(root == NULL) return -1;
    else {
        int lheight = height(root->left);
        int rheight = height(root->right);
        if(lheight > rheight) return (lheight+1);
        else return (rheight+1);
    }
}


int main() {
    Node *p = new Node(5);
    Node *p1 = new Node(3);
    Node *p2 = new Node(6);
    Node *p3 = new Node(2);
    Node *p4 = new Node(4);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
   
    cout<<height(p);
   
    return 0;
}