#include <bits/stdc++.h>

using namespace std;

struct Node{            // Structure
    int data;           // Stores integer data
    struct Node* left;  // Point to the left child
    struct Node* right; // Point to the right child

    Node(int val){      // Constructor for the structure Node
        data = val;     // The data of the node is stored as the input argument
        left = NULL;    // Point to the left child
        right = NULL;   // Point to the left child
    }
};

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
}