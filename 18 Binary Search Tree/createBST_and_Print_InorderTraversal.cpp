#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = right = NULL;
    }
};
node* createBST(node* root, int d){
    // base case
    if(root == NULL){
        node* n = new node(d);
        return n;
    }
    // recursive case
    if(d <= root->data)
        root->left = createBST(root->left, d);
    else
        root->right = createBST(root->right, d);
    return root;    
}
void inorderTraversal(node* root){
    // base case
    if(root == NULL){
        return;
    }
    // recursive case
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}
int main()
{
    node* root = NULL;
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    for(auto i:arr){
        root = createBST(root, i);
    }
    inorderTraversal(root);
    return 0;
}