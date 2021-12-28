// Building Preorder Tree and doing preorder traversal
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* right;
    node* left;
    node(int d):data(d), right(NULL), left(NULL){} 
};
node* buildTree(){
    int data;
    cin >> data;
    if(data == -1){
        return NULL;
    }
    node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();
}
void printPreorder(node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}
int main(){
    node* root = buildTree();
    printPreorder(root);
    return 0;
}