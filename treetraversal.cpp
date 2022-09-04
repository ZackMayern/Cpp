// DFS Techniques - Pre, In and Post order traversal.
#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preOrder(Node* root){
    if(root == NULL)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->right->left = new Node(7);
    root->right->right = new Node(8);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);

    cout << "Pre-Order Traversal" << endl;
    preOrder(root);
    cout << endl;
    cout << "In-Order Traversal" << endl;
    inOrder(root);
    cout << endl;
    cout << "Post-Order Traversal" << endl;
    postOrder(root);

    //        1
    //       /  \ 
    //     2     3
    //    / \   / \ 
    //   4   5 7   8
    //      /     / \ 
    //     6     9  10
}   