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

vector<vector<int>> dfs(Node* root){
    vector<vector<int>> result;
    if(root == NULL)
        return result;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0; i<size; i++){
            Node* node = q.front();
            q.pop();
            if(node->left!=NULL)
                q.push(node->left);
            if(node->right!=NULL)
                q.push(node->right);
            level.push_back(node->data);
        }
        result.push_back(level);
    }
    return result;
}

void preOrder(Node* root){
    if(root == NULL)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void printVector(vector<vector<int>> a){
    for(int i=0; i<a.size(); i++)
        for(int j=0; j<a[i].size(); j++)
            cout << a[i][j] << " ";
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    preOrder(root);
    cout << endl;
    vector<vector<int>> answer = dfs(root);
    printVector(answer);

    //            1
    //          /   \ 
    //         2     3
    //        / \   / \ 
    //       4   5 6   7
    return 0;
}