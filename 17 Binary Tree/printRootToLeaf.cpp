#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d) : data(d), left(NULL), right(NULL) {}
};
node* createBT(int d){
    if(d == -1)
        return NULL;
    node* root = new node(d);
    root->left = createBT(d);
    root->right = createBT(d);
    return root;
}
void printRoot2LeafPath(node *root, vector<int> &path)
{   
    // base case
    if(root == NULL){
        return;
    }
    if(root->left == NULL and root->right == NULL){
        // print the vector
        for(int i:path){
            cout << i << "->";
        }
        cout << root->data << "->";
        cout << endl;
        return;
    }
    // recursive case
    path.push_back(root->data);
    printRoot2LeafPath(root->left, path);
    printRoot2LeafPath(root->right, path);
    path.pop_back();
}
int main()
{
    node* root = NULL;
    vector<int> path;
    int arr[] = {1, 2, 4, -1, -1, 5, 7, -1, -1, -1, 3, -1, 6, -1, -1};
    for(int i:arr)
        root = createBT(i);
    printRoot2LeafPath(root, path);
    return 0;
}