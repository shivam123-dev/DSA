// Inorder Tree Traversal and Building Tree
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* right;
    node* left;
    node(int d){
        data = d;
        right = left = NULL;
    }
};
node* buildTree(){
    int d;
    cin >> d;
    if(d == -1)
        return NULL;
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void inOrderTraversal(node* root){
    if(root  == NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}
int height(node* root){
    if(root == NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    return max(h1, h2)+1;
}
int main(){
    node* root = buildTree();
    inOrderTraversal(root);
    cout << endl;
    cout << height(root) << endl;
    return 0;
}