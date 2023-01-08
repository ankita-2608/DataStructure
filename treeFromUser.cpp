#include<iostream>
#include<queue>
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



Node* insertIntoBST(Node* root, int data) {
    //base case
    if(root == NULL) {
        root = new Node(data);
        return root;
    }
    if(data > root->data) {
        root->right = insertIntoBST(root->right, data);
    }
    else {
        root->left = insertIntoBST(root->left, data);
    }
}

void takeInput(Node* root) {
    int data;
    cin>>data;

    while(data != -1) {
        insertIntoBST(root, data);
        cin>>data;
    }
}

int main() {

    Node* root = NULL;

    cout<<"Enter data to create BST"<<endl;
    takeInput(root);

    cout<<"Printing the BST"<<endl;
    //levelOrder(root);

    return 0;
}
