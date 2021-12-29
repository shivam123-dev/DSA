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
    if(d <= root->data)
        root->left = createBST(root->left, d);
    else
        root->right = createBST(root->right, d);
    return root;
}
bool search(node* root, int k){
    // base case
    if(root == NULL){
        return false;
    }
    if(root->data == k)
        return true;
    // recursive case
    if(k < root->data)
        return search(root->left, k);
    return search(root->right, k);
}
int main()
{
    node *root = NULL;
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    for (auto i : arr)
    {
        root = createBST(root, i);
    }
    int k; cin >> k;
    cout << search(root, k);
    return 0;
}