#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int d):data(d), left(NULL), right(NULL){}
};
node* createBST(node* root, int d){
    // base case
    if(root == NULL){
        node* n = new node(d);
        return n;
    }
    // recursive case
    if(d<root->data){
        root->left = createBST(root->left, d);
    }
    else{
        root->right = createBST(root->right, d);
    }
    return root;
}
node* findMin(node* root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}
node* deleteBST(node* root, int key){
    if(root == NULL)
        return NULL;
    else if(key < root->data)
        root->left = deleteBST(root->left, key);
    else if(key > root->data)
        root->right = deleteBST(root->right, key);
    else{
        // Case 1:- No child exists
        if(root->left == NULL and root->right == NULL){
            delete root;
            root = NULL;
        }
        // Case 2:- Either left child or right child exists
        else if(root->left == NULL){
            node* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL){
            node* temp = root;
            root = root->left;
            delete temp;
        }
        // Case 3:- Both left and right children exists
        else{
            node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteBST(root->right, temp->data);
        }
        return root;
    }
}
void printTree(node* root){
    // base case
    if(root == NULL){
        return;
    }
    // recursive case
    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}
int main(){
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    node* root = NULL;
    for(int i:arr)
        root = createBST(root, i);
    // original inorder traversal of tree
    printTree(root);
    cout << endl;
    // deleting BST with no child
    root = deleteBST(root, 4);
    printTree(root);
    // deleting BST with 1 child
    root = deleteBST(root, 14);
    printTree(root);
    // deleting BST with 2 children
    root = deleteBST(root, 3);
    printTree(root);
    return 0;
}