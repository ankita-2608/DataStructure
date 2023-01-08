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



struct Node* search(struct Node* root, int key) {
    if(root == NULL) return NULL;

    if(root->data == key) return root;

    else if(root->data > key) return search(root->left, key);

    else return search(root->right, key);
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
   
    if(search(p,3)) {
        cout<<"Found";
    }
   
    return 0;
}
