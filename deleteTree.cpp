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


//deletion in binary Search Tree
Node* deleteNode(Node* root, int val) {
  
      //base case
      if(root == NULL) return root;
      if(root->data == val) {
        
        //0 child
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        //1 child

        //left child
        if(root->left != NULL && root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // right child
        if(root->right != NULL && root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child

        //1 condition
        if(root->left != NULL && root->right != NULL) {
            int min = minNode(root->right)->data;
            root->data = min;
            root->right = deleteNode(root->right, min);
            return root;
        }
        //2 condition
        //if(root->left != NULL && root->right != NULL) {
            // int max = maxNode(root->left)->data;
            // root->data = max;
            // root->left = deleteNode(root->left, max);
            //return root;
        //}

      }
      else if(root->data > val) {
        root->left = deleteNode(root->left, val);
      }
      else {
        root->right = deleteNode(root->right, val);
      }
}

//kth smallest node
 

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

    p = deleteNode(p, 2);
    
    return 0;
}
