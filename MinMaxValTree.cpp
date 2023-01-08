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

//minimum value in the tree
Node* minNode(Node* root) {
    Node* temp = root;
    while(temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}

//maximum value of the tree
Node* maxNode(Node* root) {
    Node* temp = root;
    while(temp->right != NULL) {
        temp = temp->right;
    }
    return temp;
}

int main()
{
    Node *p = new Node(5);
    Node *p1 = new Node(3);
    Node *p2 = new Node(6);
    Node *p3 = new Node(2);
    Node *p4 = new Node(4);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    cout<<minNode(p)->data<<endl;
    cout<<maxNode(p)->data<<endl;
  
    return 0;
}
