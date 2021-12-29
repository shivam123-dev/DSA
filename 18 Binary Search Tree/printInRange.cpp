#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int d):data(d),left(NULL),right(NULL){}
};
node* createBST(node* root, int d){
    // base case
    if(root == NULL){
        root = new node(d);
        return root;
    }
    // recursive case
    if(d<=root->data)
        root->left = createBST(root->left, d);
    else 
        root->right = createBST(root->right, d);
    return root;
}
void printInRangeBST(node* root, int k1, int k2){
    // base case
    if(root == NULL){
        return;
    }
    // calling on both left and right subtrees
    if(root->data >= k1 and root->data <= k2){
        printInRangeBST(root->left, k1, k2);
        cout << root->data << " ";
        printInRangeBST(root->right, k1, k2);
    }
    // calling on left subtree
    if(root->data > k2){
        printInRangeBST(root->left, k1, k2);
    }
    else{
        // root->data < k1
        printInRangeBST(root->right, k1, k2);
    }
    return;
}
int main()
{
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    node* root = NULL;
    for(int i:arr)
        root = createBST(root, i);
    printInRangeBST(root, 5, 12);
    return 0;
}